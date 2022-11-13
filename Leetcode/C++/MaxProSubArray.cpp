#include <bits/stdc++.h>
using namespace std;

int MaxPro(vector<int>& nums){
    int MaxPro = 1;
    int CurrPro = 1;

    if(nums.size() == 1){
        return nums[0];
    }

    for(int num : nums){
        if(num == 0){
            num = 1;
            MaxPro = 1;
        }
        CurrPro = CurrPro * num;
        if(MaxPro < CurrPro){
            MaxPro = CurrPro;
        }

        if(MaxPro <= 0){
            MaxPro = 1;
        }
    }

    return MaxPro;
}

int maxProduct(vector<int>& nums) {

    int curr_product = 1, res = INT_MIN;

    for (auto i: nums) {
        curr_product = curr_product * i;
        res = max(curr_product, res);
        if(curr_product == 0) {
            curr_product = 1;
        }
    }

    curr_product = 1;

    for (int i = nums.size()-1; i>=0; i--) {
        curr_product = curr_product * nums[i];
        res = max(curr_product, res);
        if(curr_product == 0) {
            curr_product = 1;
        }
    }
    return res;
}

int main(){

//    freopen("output.txt", "w", stdout);
//    srand(time(NULL));
//    int t= rand() % 10 +1;
//    cout << "Test Case: " << t << endl;
//    int m=1;
//    while(m<=t){
//        cout << "=========[ TEST CASE " << m << " ]==========" << endl;
//        int n = rand() % 10 +1 ;
//        cout << "Input: " << n << endl;
//        vector<int> nums(n);
//        cout << "Array: ";
//        for(int i=0; i<n; i++){
//            nums[i] = rand() % 11;
//            cout << nums[i] << " ";
//        }
//        cout << endl;
//

        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n;i++){
            cin >> nums[i];
        }
//
            int MySolution = MaxPro(nums);
            int CorrectSolution = maxProduct(nums);
            if (MySolution == CorrectSolution) {
                cout << "[✅] TEST CASE PASS" << endl;
                cout << "Answer: " << MySolution << endl;
            } else {
                cout << "[❌] TEST CASE FAILED" << endl;
                cout << "Your Answer: " << MySolution << endl;
                cout << "Correct Answer: " << CorrectSolution << endl;
            }
//            m++;
//            if (m == t) {
//                cout << "=================================" << endl;
//            }
//        }
}