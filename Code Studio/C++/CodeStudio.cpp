#include <iostream>
#include <vector>

using namespace std;

void sort012(int arr[], int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {

    }

}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}


class Solution {
public:
    int r(int x) {
        long long int rn = 0, re;
        while (x != 0) {
            re = x % 10;
            rn = rn * 10 + re;
            x = x / 10;
        }
        return rn;

    }

    bool isPalindrome(int x) {
        if (r(x) != 0 && x < 0) {
            return false;
        } else if (r(x) == x) {
            return true;
        } else {
            return false;
        }

    }
};