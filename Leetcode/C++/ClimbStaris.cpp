#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n<1) return 0;
        int a[100];
        a[0]=1;
        a[1]=2;
        for(int i=2;i<n;i++)
            a[i]=a[i-1]+a[i-2];
        return a[n-1];
    }
};

int main(){

clock_t start = clock();
std::ios::sync_with_stdio(false);
    Solution s;
    cout << s.climbStairs(45);
cout << "\n";
cout << "Time taken: " << (double)(clock() - start) / (double)CLOCKS_PER_SEC << " \n";

    return 0;
}