#include<bits/stdc++.h>
using namespace std;

string UncommonChars(string a, string b)
{
    int mp1[26] = {0}, mp2[26] = {0};
    int n = a.size(), m = b.size();

    for(auto &x: a){
        mp1[x-'a'] = 1;
    }

    for(auto &x: b){
        mp2[x-'a'] = 1;
    }

    string chars;

    for(int i = 0; i < 26; ++i){   //line 1
        if(mp1[i]^mp2[i])                // line 2
            chars+=char(i+'a');        // line 3
    }
    if(chars == "")
        return "-1";
    else
        return chars;
}

int main(){
    string a = "geeksforgeeks";
    string b = "geeksquiz";
    string result = UncommonChars(a,b);
    cout << result << endl;
    return 0;
}