#include <bits/stdc++.h>
using namespace std;

//Question: find the XOR of all L to R-1 numbers with time complexity O(1) and space complexity O(1)

int ComputeXOR(int n)
{
    if(n%4==0){
        return n;
    }
    if(n%4==1){
        return 1;
    }
    if(n%4==2){
        return (n+1);
    }

    if(n%4==3){
        return (0);
    }
}

int main(){
    int L,R;
    cin >> L >> R;
    int result =  ComputeXOR(R) ^ ComputeXOR(L-1);
    cout << result;
    return 0;
}

//why there is no output in the above code?
// Answer: did you cout your function if it is non-void type.