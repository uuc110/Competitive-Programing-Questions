#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long zeroFilledSubarray(vector<int>& ar) {
        // Just search for this fomula if you know then its good, By using the formula you can find the Number of sub string by (N * (N+1))/2
        vector<int> m;
        long long FinalSum = 0LL;
        for (int i = 0; i < ar.size(); i++) {
            if (ar[i] == 0) {
                m.push_back(ar[i]);
            } else {
                long long size = m.size();
                FinalSum += (size * (size + 1)) / 2;
                m.erase(m.begin(), m.end());
            }
        }
        long long size = m.size();
        FinalSum += (size * (size + 1)) / 2;
        return FinalSum;
    }

    long long correct(vector<int>& nums) {
        long long res = 0;
        for (int i = 0, j = 0; i < nums.size(); ++i) {
            if (nums[i] != 0)
                j = i + 1;
            res += i - j + 1;
        }
        return res;
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
//        int n = rand() % 10 +1 ;
//        cout << "Input: " << n << endl;
//        vector<int> arr(n);
//        cout << "Array: [";
//        for(int i=0; i<n; i++){
//            arr[i] = rand() % 2;
//            cout << arr[i];
//            if(i<n-1) cout << ",";
//        }
//        cout << "]" <<endl;

        //========= MANUAL ==========//

        vector<int> arr = {1,0,0,0,0};
        cout << "Array: [";
        for(int i=0; i<arr.size(); i++){
            cout << arr[i];
            if(i<arr.size()-1) cout << ",";
        }
        cout << "]" <<endl;


        auto mySolution = s.zeroFilledSubarray(arr);
        auto CorrectSolution = s.correct(arr);
        if(mySolution == CorrectSolution){
            cout << "[✅] TEST CASE PASS" << endl;
            cout << "Answer: " <<  mySolution << endl;
        }else{
            cout << "[❌] TEST CASE FAILED" << endl;
            cout << "Your Answer: " << mySolution << endl;
            cout << "Correct Answer: " << CorrectSolution << endl;
        }
         if(m == t){
            cout << "=================================" << endl;
        }
        ++m;
        }
}