#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<string> fizBuzz (int n){
        vector<string> ans(n);

        for(int i = 1;i <= n; i++) {
            ans[i - 1] = to_string(i);
        }
        for (int i = 2; i < n; i+=3) {
            ans[i] = "Fizz";
        }

        for (int i = 4; i < n; i+=5) {
           ans[i] = "Buzz";
        }

        for (int i = 14; i < n; i+=15) {
           ans[i] = "FizzBuzz";
        }
        return ans;
    }
};

 void print(vector<string> data){
         for(int i=0; i< data.size();i++){
             cout << data[i] << " ";
         }
         cout << endl;
     }

int main(){
    Solution s;
    int n(10);
    auto ans = s.fizBuzz(n);
    print(ans);
    
    return 0;
}