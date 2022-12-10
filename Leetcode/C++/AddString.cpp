#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string nums1, string nums2) {
        string res = "";
       int i = nums1.length()-1;
       int j = nums2.length()-1;

        int carry = 0;
        while(i >=0 || j >= 0 || carry){
            int sum = carry;
            if(i>=0){
                sum += nums1[i]- '0';
                i--;
            }

            if(j>=0){
                sum += nums2[j]- '0';
                j--;
            }

            res += to_string(sum % 10);
            carry = sum / 10;

        }
            reverse(res.begin(), res.end());
            return res;
    }
};

int main(){
    Solution s;
    string num1 = "123";
    string num2 = "456";
    cout << s.addStrings(num1, num2) << endl;

    return 0;
}