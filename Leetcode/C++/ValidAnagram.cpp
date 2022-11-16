#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool ValidAnagram(string s, string t){
        if(s.length() != t.length()) return false;
        unordered_map<char, int> mp;
        for(char c: s){
            mp[c]++;
        }
        for(char c: t){
            mp[c]--;
            if(mp[c] < 0) return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    string s1 = "anagram", s2 = "nagaram";
    cout << s.ValidAnagram(s1, s2) << endl;
}

