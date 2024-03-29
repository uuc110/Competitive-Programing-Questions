 /*Question: https://leetcode.com/problems/string-compression/
 Description: Given an array of characters, compress it in-place. The length after compression must always be smaller
 than or equal to the original array. Every element of the array should be a character (not int) of length 1. After you are done modifying the input array in-place, return the new length of the array.
 Follow up: Could you solve it using only O(1) extra space? Mean while, you can't use any other data structure.
 Example 1: Input: ['a','a','b','b','c','c','c'] Output: Return 6, and the first 6 characters of the input array should be: ['a','2','b','2','c','3'] Explanation: 'aa' is replaced by 'a2'. 'bb' is replaced by 'b2'. 'ccc' is replaced by 'c3'.
 Example 2: Input: ['a'] Output: Return 1, and the first 1 characters of the input array should be: ['a'] Explanation: Nothing is replaced.
 Example 3: Input: ['a','b','b','b','b','b','b','b','b','b','b','b','b'] Output: Return 4, and the first 4 characters of the input array should be: ['a','b','1','2']. Explanation: Since the character 'a' does not repeat, it is not compressed. 'bbbbbbbbbbbb' is replaced by 'b12'. Notice each digit has it's own entry in the array.
 Note: All characters have an ASCII value in [35, 126]. 1 <= len(chars) <= 1000.
  */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int StringCompression(vector<char>& chars) {
        int size = chars.size();
        int i = 0;
        int count = 1;
        int index = 0;
        for (; i < size; i++) {
            if (i == size - 1 || chars[i] != chars[i+1]) {
                chars[index++] = chars[i];
                if (count > 1) {
                    string countStr = to_string(count);
                    for (char c : countStr) {
                        chars[index++] = c;
                    }
                }
                count = 1;
            } else {
                count++;
            }
        }
        return index;
    }

    int Testing(vector<char>& chars){
        int n = chars.size();
        if(n == 0) return 0;
        int ans = 1, count = 1;
        char prev = chars[0];
        for(int i = 1; i < n; i++) {
            if(chars[i] == prev) count++;
            else {
                prev = chars[i];
                if(count == 1) ans++;
                else if(count <= 9) ans += 2;
                else ans += 3;
                count = 1;
            }
        }
        if(count == 1) ans++;
        else if(count <= 9) ans += 2;
        else ans += 3;
        return ans-1;
    }
};

int main(){
    Solution s;
    vector<char> chars = {};
    cout<< "testing: "<<s.Testing(chars) << endl;
    cout<< "Correct: "<<s.StringCompression(chars);
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