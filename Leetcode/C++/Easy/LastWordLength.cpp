#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        string word = "";
        vector<string> arr;
        for(int i=0; i< s.length();i++){
            if(s[i] == ' '){
                continue;
            }else{
                word += s[i];
                if(s[i+1]== ' ' || i == s.length()-1){
                    arr.push_back(word);
                    word = "";
                }
            }
        }
        for(auto ans : arr){
            cout << ans << " ";
        }
        cout << arr.size() << endl;
        return (arr[arr.size()-1]).length();
    }
};

int main(){
    Solution s;
    string str = "Hello Sourabh";
    cout << s.lengthOfLastWord(str) << endl;
    return 0;
}