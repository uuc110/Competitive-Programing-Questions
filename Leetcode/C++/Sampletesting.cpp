#include <bits/stdc++.h>

using namespace std;


//wrtie a funtion which return pair of kth smallest and largest element
// if k is greater than size of array return -1
// if k is 0 return -1
// first sort the array and rempve the all duplicate element
// then resize the array and return the kth smallest and largest element

pair<int, int> KthSAndL(vector<int> arr, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1]) {
            arr.erase(arr.begin() + i);
            n--;
        }
    }
    pair<int, int> p;
    if (k > n || n == 0 || k == 0) {
        return make_pair(-1, -1);
    }
    return make_pair(arr[k - 1], arr[n - k]);
}


int main() {
    int t;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//    stdsteam("input.txt", "r", stdin);
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[i + 1]) {
                arr.erase(arr.begin() + i);
                n--;
            }
        }
        pair<int, int> p;
        if (k > n || n == 0 || k == 0) {
            cout << "-1 -1" << endl;
            continue;
        }

        for(int x: arr){
            cout << x;
        }

    }
    return 0;
}