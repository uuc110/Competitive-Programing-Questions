#include <bits/stdc++.h>

using namespace std;

int main() {
    //take a sentence as input
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))) {
            s.erase(i, 1);
            i--;
        }
    }
    //check if palidorme
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            cout << "false";
            return 0;
        }
        i++;
        j--;
    }
//    //remove all non-alphanumeric characters
//    for (int i = 0; i < s.size(); ++i) {
//
//    }

    cout << s << endl;



}