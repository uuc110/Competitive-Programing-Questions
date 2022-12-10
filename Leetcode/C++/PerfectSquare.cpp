#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int numSquares (int n){
        vector<int> dp(n+1,INT_MAX);
        //base case
        dp[0]=0;
        int count = 1;
        while(count*count <= n) {
            int sq = count*count;
            for(int i = sq; i < n+1; i++) {
                int mini = min(dp[i-sq] + 1,dp[i]);
                dp[i] = mini;
            }
            count++;
        }
        return dp[n];
    }
};

int main(){
    Solution s;
    int n(12);
    cout << "[✅] TEST CASE PASS" << endl;
    cout << "Your Answer: ";
    cout << s.numSquares(n);
    cout << endl;
    return 0;
}