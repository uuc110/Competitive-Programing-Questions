/* Question No. & Title :
 * Description :
 * Follow up :
 * Example 1 :
 * Example 2 :
 * Note :
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i = int(n);
        int count = 0;
        string str = to_string(n);

        for(char i : str){
            if(i != '0'){
                count++;
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    uint32_t n = 00000000000000000000000000001011;
    cout << s.hammingWeight(n) << endl;

    return 0;
}