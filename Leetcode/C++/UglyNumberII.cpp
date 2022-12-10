#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int UglyNumberII (int n){
        vector<int> dp(n+1);
        int c2(0), c3(0), c5(0);
        dp[0] = 1;
        for(int i=1; i< n;i++){
            dp[i] = min({2*dp[c2], 3*dp[c3], 5*dp[c5]});
            if(2*dp[c2] == dp[i]){
                c2++;
            }

            if(3*dp[c3] == dp[i]){
                c3++;
            }

            if(5*dp[c5] == dp[i]){
                c5++;
            }
        }
        return dp[n-1];
    }
};

int main(){
    Solution s;
    int n=10;
    int Myans = s.UglyNumberII(n);
//    int CorrectAns = s.UglyNumberIICorrect(n);
    if(Myans == CorrectAns){
            cout << "[✅] TEST CASE PASS" << endl;
            cout << "Your Answer: ";
            cout << s.UglyNumberII(n);
            cout << endl;
        }else{
            cout << "[❌] TEST CASE FAILED" << endl;
            cout << "Your Answer: ";
            cout << s.UglyNumberII(n);
            cout << "Correct Answer: ";
//            cout << s.UglyNumberIICorrect(n);
            cout << endl;
        }
    return 0;
}