#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    stack<string> str;
    for (int i = 0; i < s.length(); ++i) {
            string word;
        if(s[i] != ' '){
            while(i < s.length() && s[i] != ' '){
                word += s[i];
                i++;
            }
            str.push(word);
        }
    }
    cout << str.top();
    string ans;
    ans = ans + str.top();
    str.pop();
    while(!str.empty()){
        ans += ' ' + str.top();
        str.pop();
    }
    return ans;
}

int main(){
    string str = "  hello world  ";
    cout << reverseWords(str);
    return 0;
}

