/* Question No. & Title :
 * Problem Statement :
 * Follow up :
 * Example 1 :  Input:
 *              Output:
 * Example 2 :  Input:
 *              Output:
 * Note:
 *
 * Approach : Steps =>
 *
 *              Time Complexity :
 *              Space Complexity :
 *              Runtime :
 *              Memory :
 *              Beats :
 *              Difficulty :
 *              Ref :
 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        for(int i=1;i < words.size();i++){
            if(ifAnagram(words[i], words[i-1])){
               continue;
            }
            ans.emplace_back(words[i]);
        }
        return ans;
    }
private:
    bool ifAnagram(string a1, string a2){
        if(a1.length() != a2.length()) return false;
        unordered_map<char, int> map;
        for(auto i: a1){
            map[i]++;
        }
        for(auto j: a2){
            map[j]--;
            if(map[j] < 0) return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<string> words = {"a", "b", "c", "d" , "e"};
    vector<string> ans = s.removeAnagrams(words);
    for(auto i: ans){
        cout << i << " ";
    }
    return 0;
}