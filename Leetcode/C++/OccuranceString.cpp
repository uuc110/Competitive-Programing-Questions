/* Question No. & Title : 28. Implement strStr()
 * Problem Statement : Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
 * Follow up :   What should we return when needle is an empty string? This is a great question to ask during an interview.
 * Example 1 :  Input:  haystack = "hello", needle = "ll"
 *              Output:  2
 * Example 2 :  Input:  haystack = "aaaaa", needle = "bba"
 *              Output: -1
 * Note: When needle is an empty string, we should return 0. This is consistent to C's strstr() and Java's indexOf().
 *
 * Approach : Steps =>
 *             1. If needle is empty, return 0
 *             2. If haystack is smaller than needle, return -1
 *             3. Create a variable j to keep track of needle
 *             4. Iterate through haystack
 *             5. If haystack[i] == needle[j], increment j
 *             6. If j == needle.size(), return i - needle.size() + 1
 *             7. If haystack[i] != needle[j], i = i - j, j = 0
 *             8. If j == needle.size(), return i - needle.size() + 1
 *             9. If j != needle.size(), return -1
 *             10. Return -1
 *              Time Complexity : O(n)
 *              Space Complexity : O(1)
 *              Runtime : 4 ms
 *              Memory : 6.7 MB
 *              Beats : 99.99 % of cpp submissions
 *              Difficulty : Easy
 *              Ref : https://leetcode.com/problems/implement-strstr/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int strStr (string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        int n = haystack.size();
        int m = needle.size();
        if (n < m) {
            return -1;
        }
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (haystack[i] == needle[j]) {
                j++;
                if (j == m) {
                    return i - m + 1;
                }
            } else {
                i = i - j;
                j = 0;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    string str = "mississippi";
    string needle = "issip";
    int ans = s.strStr(str, needle);
    cout << "And: " << ans;

    return 0;
}