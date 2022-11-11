#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define RAND rand() % 11;

void Rotateanarray(int *arr, int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

}

int main() {
    //Write your code here

    freopen("output.txt", "w", stdout);
    srand(time(NULL));
    int t = rand() % 10;
    cout << "======================================" << endl;
    cout << "            Test Case: " << t << "           " << endl;
    cout << "======================================" << endl;
    while (t--) {
        int n = rand() % 11;
        cout << "Number of Element: " << n << endl;
        int d = rand() % n;
        cout << "Rotation: " << d << endl;
        cout << "Before Rotated Araray: " << endl;
        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 11;
            cout << arr[i] << " ";
        }
        cout << endl;

        //Add your Funtion here!!
        Rotateanarray(arr, n, d);

        cout << "After Rotated Araray: " << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "======================================" << endl;

    }

    return 0;
}