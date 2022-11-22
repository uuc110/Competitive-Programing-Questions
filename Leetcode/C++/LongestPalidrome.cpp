#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int LongestPalidrome(string s){
        if(s.length() == 1) return 1;
        if(s.length() == 2 && s[0] == s[1]) return 2;
        int O = 0, T = 0, ans = 0;
        unordered_map<char, int> mp;

        for(char c: s){
            mp[c]++;
        }

        for (auto &x: mp) {
            T = T + x.second;
            if(x.second % 2 != 0){
                O = O + x.second % 2;
            }
        }
        if(O == 0) ans = T;
        else ans = T - O + 1;
        return ans;
    }
};

int main(){
    Solution s;
    string str = "aa";
    cout << "Answer: "  << s.LongestPalidrome(str);
    return 0;
}