/* Question: 28. Find the Index of the First Occurrence in a String
 * Description : Implement strStr(). Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
 * Example 1: Input: haystack = "hello", needle = "ll" Output: 2
 * Example 2: Input: haystack = "aaaaa", needle = "bba" Output: -1
 * Clarification: What should we return when needle is an empty string? This is a great question to ask during an interview. For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
 * Note: When you are coding this problem, try to think about the case when needle is not a part of haystack. What should you return? If you are still stuck, then we recommend that you go back and read the tutorial on KMP algorithm. If you still have not understood the algorithm, you can refer to the discuss section to see what people have to say about it.
 * Source: https://leetcode.com/problems/implement-strstr/
 * Solution: https://leetcode.com/problems/implement-strstr/solution/
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