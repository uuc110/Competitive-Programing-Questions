#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }
        int dis = sum / m;
        cout << sum - (m*dis) << endl;
    }
    return 0;
}