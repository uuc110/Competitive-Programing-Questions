//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    string removeConsecutiveCharacter(string S)
    {
        int count =0;
        for(int i=0; i< S.length(); i++){
            //erase it if s[i] is equal to s[i-1] in the string.
            if(S[i] == S[i-1]){
                S.erase(i,1);
                i--;
                //why (i, 1)? because we want to erase only one character.
                //why i--?
                // Answer: because after erasing the element, the next element will be at the same index.
            }
        }
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
}




// } Driver Code Ends