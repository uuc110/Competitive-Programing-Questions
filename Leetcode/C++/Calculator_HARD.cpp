#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> stk;
        int a;
        stringstream ss(s);
        char op = '+';
        while(ss >> a){
            if(op == '+' || op == '-'){
                stk.push(op == '+' ? a : -a);
            }else{
                int last = stk.top();
                stk.pop();
                if(op == '*') last *= a;
                else last /= a;
                stk.push(last);
            }
            ss >> op;
        }
        int sum =0;
        while(!stk.empty()){
            sum += stk.top();
            stk.pop();
        }
        return sum;
    }
};

int main(){


    return 0;
}