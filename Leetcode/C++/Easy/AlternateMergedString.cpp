#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int j=0;
        while(j<word1.size() || j<word2.size()){
            if (j < word1.size()) {
                ans += word1[j];
            }
            if (j < word2.size()) {
                ans += word2[j];
            }
            j++;
        }

        return ans;

    }
};

int main(){
    Solution s;
    string word1 = "abcdefg";
    string word2 = "pqr";
    cout << s.mergeAlternately(word1, word2) << endl;

    return 0;
}