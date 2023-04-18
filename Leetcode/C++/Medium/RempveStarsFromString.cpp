#include <bits/stdc++.h>
#include <ostream>
using namespace std;


class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i = s.size()-1; i>=0;i--){
            if(s[i] == '*') {
                st.push(s[i]);
                s.erase(i,1);
            } else{
                if(!st.empty()) {
                    s.erase(i, 1);
                    st.pop();
                }

            }
        }
        return s;
    }
};

int main(){
    Solution s;
    string str = "a*b*c";
    cout << s.removeStars(str) << endl;

    return 0;
}