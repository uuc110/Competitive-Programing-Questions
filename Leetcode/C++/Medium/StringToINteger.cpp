/* Question No. & Title : 8. String to Integer (atoi)
 * Problem Statement : Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).
 * Follow up :  The algorithm for myAtoi(string s) is as follows:
 *             1. Read in and ignore any leading whitespace.
 *             2. Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
 *             3. Read in next the characters until the next non-digit charcter or the end of the input is reached. The rest of the string is ignored.
 *             4. Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
 *             5. If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
 * Example 1 :  Input: s = "word with 987"
 *              Output: 0
 * Example 2 :  Input: s = "   -42"
 *              Output: -42
 * Note: 1. Only the space character ' ' is considered a whitespace character.
 *      2. Do not ignore any characters other than the leading whitespace or the rest of the string after the digits.
 *      3. The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.
 *
 * Approach : Steps =>
 *               1. If string is empty, return 0
 *               2. Remove all spaces from string
 *               3. Check if first character is '-' or '+', if yes, store it in sign variable
 *               4. If first character is '-' or '+', remove it from string
 *               5. Iterate through string
 *               6. If character is not a digit, break
 *               7. Multiply ans by 10 and add character - '0'
 *               8. If ans*sign > INT_MAX, return INT_MAX
 *               9. If ans*sign < INT_MIN, return INT_MIN
 *               10. Return ans*sign
 *              Time Complexity : O(n)
 *              Space Complexity : O(1)
 *              Runtime : 4 ms
 *              Memory : 6.4 MB
 *              Beats : 57.14 % of cpp submissions
 *              Difficulty : Medium
 *              Ref : https://leetcode.com/problems/string-to-integer-atoi/
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        if(s.empty()) return 0;
        long ans = 0;
        s = removeSpaces(s);
        const int sign = s[0] == '-' ? -1 : 1;
        if(s[0] == '-' || s[0] == 1){
            s= s.substr(1);
        }
        for(auto i : s){

            if(!isdigit(i)) break;
            ans = ans*10 + i - '0';
            if(ans*sign > INT_MAX) return INT_MAX;
            if(ans*sign < INT_MIN) return INT_MIN;
        }
        return ans*sign;
    }

private:
    string removeSpaces(string str)
    {
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        return str;
    }
};


int main() {
    Solution s;
    string str = "    -42";
    cout << s.myAtoi(str) << endl;


    return 0;
}

/*
Dec  = Decimal Value
Char = Character

'5' has the int value 53
if we write '5'-'0' it evaluates to 53-48, or the int 5
if we write char c = 'B'+32; then c stores 'b'


Dec  Char                           Dec  Char     Dec  Char     Dec  Char
---------                           ---------     ---------     ----------
  0  NUL (null)                      32  SPACE     64  @         96  `
  1  SOH (start of heading)          33  !         65  A         97  a
  2  STX (start of text)             34  "         66  B         98  b
  3  ETX (end of text)               35  #         67  C         99  c
  4  EOT (end of transmission)       36  $         68  D        100  d
  5  ENQ (enquiry)                   37  %         69  E        101  e
  6  ACK (acknowledge)               38  &         70  F        102  f
  7  BEL (bell)                      39  '         71  G        103  g
  8  BS  (backspace)                 40  (         72  H        104  h
  9  TAB (horizontal tab)            41  )         73  I        105  i
 10  LF  (NL line feed, new line)    42  *         74  J        106  j
 11  VT  (vertical tab)              43  +         75  K        107  k
 12  FF  (NP form feed, new page)    44  ,         76  L        108  l
 13  CR  (carriage return)           45  -         77  M        109  m
 14  SO  (shift out)                 46  .         78  N        110  n
 15  SI  (shift in)                  47  /         79  O        111  o
 16  DLE (data link escape)          48  0         80  P        112  p
 17  DC1 (device control 1)          49  1         81  Q        113  q
 18  DC2 (device control 2)          50  2         82  R        114  r
 19  DC3 (device control 3)          51  3         83  S        115  s
 20  DC4 (device control 4)          52  4         84  T        116  t
 21  NAK (negative acknowledge)      53  5         85  U        117  u
 22  SYN (synchronous idle)          54  6         86  V        118  v
 23  ETB (end of trans. block)       55  7         87  W        119  w
 24  CAN (cancel)                    56  8         88  X        120  x
 25  EM  (end of medium)             57  9         89  Y        121  y
 26  SUB (substitute)                58  :         90  Z        122  z
 27  ESC (escape)                    59  ;         91  [        123  {
 28  FS  (file separator)            60  <         92  \        124  |
 29  GS  (group separator)           61  =         93  ]        125  }
 30  RS  (record separator)          62  >         94  ^        126  ~
 31  US  (unit separator)            63  ?         95  _        127  DEL
*/