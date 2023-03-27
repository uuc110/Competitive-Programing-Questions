#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    /**
     * @param nums: a sorted integer array
     * @param lower: An integer
     * @param upper: An integer
     * @return: a list of its missing ranges
     */
    vector<string> findMissingRanges(vector<int> &nums, int lower, int upper) {
        vector<string> AnswerString;
        for(int i =0;i < nums.size();i++){
            if(nums[i]+1 == nums[i+1]){
                continue;
            }else{
                int low = nums[i]+1;
                int high = nums[i+1]-1;
                string InputString = to_string(low) + "->" + to_string(high);
                AnswerString.push_back(InputString);
            }
        }
        return AnswerString;
    }

    vector<string> findMissingRangesCorrect(vector<int> &nums, int lower, int upper) {
        vector<string> AnswerString;
        string InputString = "";
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] + 1 == nums[i + 1]) {
                continue;
            } else {
                int low = nums[i] + 1;
                int high = nums[i + 1] - 1;
                if(low == high) {
                    InputString = to_string(low);
                    AnswerString.push_back(InputString);
                }else if(low > high) {
                    continue;
                }else if( low < high){
                    InputString = to_string(low) + "->" + to_string(high);
                    AnswerString.push_back(InputString);
                }
            }
        }
        return AnswerString;
    }
};

int main(){
    Solution s;
    freopen("output.txt", "w", stdout);
        srand(time(NULL));
        int t= rand() % 10 +1;
        cout << "Test Case: " << t << endl;
        int m=1;
        while(m<=t){
            cout << "=========[ TEST CASE " << m << " ]==========" << endl;

            //============== AUTO ==============//
            int n = rand() % 10 +1 ;
            cout << "Input: " << n << endl;
            vector<int> arr(n);
            cout << "Array: [";
            for(int i=0; i<n; i++){
                arr[i] = rand() % 100+1;
                cout << arr[i];
                if(i<n-1) cout << ",";
            }
            cout << "]" <<endl;
            sort(arr.begin(), arr.end());
            int lower = rand() % 10 +1;
            int upper = rand() % 10 +1;
            cout << "Lower: " << lower << endl;
            cout << "Upper: " << upper << endl;

            //========= MANUAL ==========//
//
//            vector<int> arr = {0, 1, 3, 50, 75};
//            int lower = 0, upper = 99;
//            cout << "Array: [";
//            for(int i=0; i<arr.size(); i++){
//                cout << arr[i];
//                if(i<arr.size()-1) cout << ",";
//            }
//            cout << "]" <<endl;


            auto mySolution = s.findMissingRanges(arr, lower, upper);
            auto correctSolution = s.findMissingRangesCorrect(arr, lower, upper);

            if (mySolution == correctSolution) {  // compare the two solutions
                cout << "[✅] TEST CASE PASSED" << endl;
                // If the two solutions are the same, print only my solution
                if (mySolution.size() == 1) {
                    cout << "Answer: " << mySolution[0] << endl;
                } else {
                    cout << "Answer: [";
                    for (int i = 0; i < mySolution.size(); ++i) {
                        cout << mySolution[i];
                        if (i < mySolution.size() - 1) {
                            cout << ", ";
                        }
                    }
                    cout << "]" << endl;
                }
            } else {  // the two solutions are different
                cout << "[❌] TEST CASE FAILED" << endl;
                // print both my solution and the correct solution
                if (mySolution.size() == 1) {
                    cout << "Your Answer: " << mySolution[0] << endl;
                    cout << "Correct Answer: " << correctSolution[0] << endl;
                } else {
                    cout << "Your Answer: [";
                    for (int i = 0; i < mySolution.size(); ++i) {
                        cout << mySolution[i];
                        if (i < mySolution.size() - 1) {
                            cout << ", ";
                        }
                    }
                    cout << "]" << endl;

                    cout << "Correct Answer: [";
                    for (int i = 0; i < correctSolution.size(); ++i) {
                        cout << correctSolution[i];
                        if (i < correctSolution.size() - 1) {
                            cout << ", ";
                        }
                    }
                    cout << "]" << endl;
                }
            }

            ++m;
            }
    
    return 0;
}