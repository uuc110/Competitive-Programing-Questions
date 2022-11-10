#include <bits/stdc++.h>
using namespace std;

//Question: Given N find the XOR of all numbers from 1 to N with O(1) space complexity and O(logN) time complexity

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
    int n;
    cin >> n;
    cout << ComputeXOR(n);
    return 0;
}

//why there is no output in the above code?
// Answer: did you cout your function if it is non-void type.