//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    string removeDuplicates(string str) {
        unordered_map<char, int> mp;
        string ans = "";

        for(char c: str){
            mp[c]++;
            if(mp[c] == 1){
                ans += c;
            }
        }
        return ans;

        //visualize the code

        //mp['g'] = 1;
        //mp['e'] = 2;
        //mp['k'] = 2;
        //mp['s'] = 2;
        //mp['f'] = 1;
        //mp['o'] = 1;
        //mp['r'] = 1;
        //ans = "geksfor";

        //explaing code:
        //1. create a map to store the frequency of each character.
        //2. create a string to store the answer.
        //3. iterate through the string.
        //4. if the character is not in the map, add it to the map and add it to the answer.
        //5. return the answer.
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends