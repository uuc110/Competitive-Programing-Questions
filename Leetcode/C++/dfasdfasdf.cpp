#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool BackspaceString (string s, string t){
        //create a two stack
        stack<char> s1;
        stack<char> s2;
        //push the string into the stack
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '#'){
                s1.push(s[i]);
            }else{
                if(!s1.empty()){
                    s1.pop();
                }
            }
        }
        for(int i = 0; i < t.length(); i++){
            if(t[i] != '#'){
                s2.push(t[i]);
            }else{
                if(!s2.empty()){
                    s2.pop();
                }
            }
        }
        //compare the two stack
        while(!s1.empty() && !s2.empty()){
            if(s1.top() != s2.top()){
                return false;
            }
            s1.pop();
            s2.pop();
        }
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    string string1 = "ab#c";
    string string2 = "ad#c";
    if(s.BackspaceString(string1,string2)){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}