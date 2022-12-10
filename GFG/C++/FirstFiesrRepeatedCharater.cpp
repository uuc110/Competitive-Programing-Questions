#include <bits/stdc++.h>
using namespace std;

string firstRepChar(string string1) {
   char mp[26] = {0};
    int n = string1.size();

    for(char i : string1){
        mp[i-'a']++;
        if(mp[i-'a'] == 2){
            return string(1,i);
        }
    }
    return "-1";

}

int main(){

    string s = "geeksforgeeks";
    cout << firstRepChar(s);
    return 0;
}