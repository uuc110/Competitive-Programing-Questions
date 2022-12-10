#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long int> v;
    for (long long i = 0; i < n; ++i) {
        long long int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int q;
    cin >> q;
    int index;
    cin >> index;
    ::iterator low1 = lower_bound(v.begin(), v.end(),index);
    for (long long i = 0; i < q; ++i) {
        long long int pos;
        cin >> pos;

    }

    return 0;
}