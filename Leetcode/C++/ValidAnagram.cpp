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

    string str1, str2;
    cin >> str1 >> str2;

//    Solution s;
//    cout << s.ValidAnagram(str1, str2);
    int counts[26];
    int countt[26];

    for(int i = 0 ; i < str1.length() ; i++)
    {
        counts[str1[i] - 'a']++;
        countt[str2[i] - 'a']++;
    }

    for(int i = 0 ; i < str1.length() ; i++){
        cout << counts[i] << " ";
    }
    cout << endl;

    for(int i = 0 ; i < str1.length() ; i++){
        cout << countt[i] << " ";
    }
    cout << endl;

    return 0;

}

/*################################################
 *  what does this code do? count[s[i] - 'a']++;
 *  count[s[i] - 'a']++; is the same as count[s[i]]++;
 *  count[s[i] - 'a']++; is the same as count[s[i] - 97]++;
 *  count[s[i] - 'a']++; is the same as count[s[i] - 97 + 0]++;
 *
 *
 *
 *
 *
 */