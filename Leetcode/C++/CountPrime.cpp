
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int CountPrime (int n){
        vector<bool> prime(n,false);
        int ans = 0;
        for(int i=2; i<n;i++){
            if(prime[i]) continue;
            ans++;
            for(long mult = (long) i*i; mult < n; mult += i) prime[mult] = true;
        }
        return ans;
    }

    int CountPrimeCorrect(int n) {
        vector<bool> seen(n, false);
        int ans = 0;
        for (int num = 2; num < n; num++) {
          num = num + 2;
            if (seen[num]) continue;
            ans++;
            for (long mult = (long)num * num; mult < n; mult += num)
                seen[mult] = true;
        }
        seen[seen.size()-1];
        return ans;
    }
};

int main(){
    freopen("output.txt", "w", stdout);
    Solution s;
    int n = 15;
    int Myans = s.CountPrime(n);
    int CorrectAns = s.CountPrimeCorrect(n);
    if(Myans == CorrectAns){
            cout << "[✅] TEST CASE PASS" << endl;
            cout << "Your Answer: ";
            cout << s.CountPrime(n);
            cout << endl;
        }else{
            cout << "[❌] TEST CASE FAILED" << endl;
            cout << "Your Answer: ";
            cout << s.CountPrime(n);
            cout << endl;
            cout << "Correct Answer: ";
            cout << s.CountPrimeCorrect(n);
            cout << endl;
        }
    return 0;
}