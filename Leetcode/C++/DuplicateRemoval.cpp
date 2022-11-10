#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

        string removeDuplicates(string s) {
            //make a stack of characters
            stack<char> st;
            //iterate over the string if the currect character of next of current charater is same then remove it from the string
            for(int i = 0; i < s.size(); i++){
                if(st.empty() || st.top() != s[i]){
                    st.push(s[i]);
                }
                else{
                    st.pop();
                }
            }
            string ans = "";
            while(!st.empty()){
                ans += st.top();
                st.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
};

int main(){
    Solution s;
    string str;
    cin >> str;
    cout << s.removeDuplicates(str);
}