#include <bits/stdc++.h>
using namespace std;
#define RANGE 255

class Solution{
public:

    string countSort(string arr){
        char output[arr.length()];

        int count[RANGE + 1], i;

        memset(count, 0, sizeof(count));

        for(i = 0; arr[i]; ++i){
            ++count[arr[i]];
        }

        for(i = 1; i <= RANGE; ++i){
            count[i] += count[i - 1];
        }

        for(i = 0; arr[i]; ++i){
            output[--count[arr[i]]] = arr[i];
        }

        for(i = 0; arr[i]; ++i){
            arr[i] = output[i];
        }

        return arr;






    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

