#include <bits/stdc++.h>
using namespace std;

int sqrt(int n){
    if (x == 0)  return 0;
    if (x == 1)  return 1;

    double lower_bound = 0;
    double upper_bound = x;
    double temp = 0;
    int nCount = 50;

    while (nCount != 0)
    {
        temp = (lower_bound + upper_bound) / 2;
        if (temp * temp == x)
        {
            return temp;
        }
        else if (temp * temp > x)

        {
            upper_bound = temp;
        }
        else
        {
            lower_bound = temp;
        }
        nCount--;
    }
    return temp + 0.00001;
    //why did I use nCount? Because I don't know how to use the while loop to stop when the difference between the upper_bound and lower_bound is small enough.
    //then is nCount = 50 is enough? I don't know.
}

int main(){
    int n;
    cin >> n;
    cout << sqrt(n);
    return 0;
}


