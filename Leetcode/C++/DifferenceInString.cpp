#include <bits/stdc++.h>
using namespace std;


char findTheDifference(string s, string t) {
    int size1 = s.length();
    int size2 = t.length();
    int sum1 =0;
    int sum2 = 0;
    for (int i = 0; i < size1; ++i) {
        sum1 += (int)s.at(i);
    }

    for (int i = 0; i < size2; ++i) {
        sum2 += (int)t.at(i);
    }

    return sum2 - sum1;
}

int main(){


    return 0;
}