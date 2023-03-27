#include <bits/stdc++.h>
#include "cmath"
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int size = a.size() > b.size() ? a.size() : b.size();
        int diff = abs((int)a.size() - (int)b.size());
        if(a.size() > b.size()){
            for(int i =0;i<diff;i++){
                b = "0" + b;
            }
        }
        string sum = "";
        string carry = "0";
        for(int i =size-1; i>=0;i--){
            if(a[i] == '1' && b[i] == '1'){
                if(carry == "1"){
                    sum += "1";
                    carry = "1";
                }else{
                    sum += "0";
                }
            }else if(a[i] == '0' && b[i]== '0'){
                sum += "0";
            }else{
                sum += "1";
            }
            carry = "0";
        }
        return sum;
    }
};


int main(){
    Solution s;
    string a = "11", b = "1";
    cout << s.addBinary(a, b);
    return 0;
}