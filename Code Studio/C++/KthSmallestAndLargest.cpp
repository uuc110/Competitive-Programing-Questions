#include <bits/stdc++.h>

using namespace std;

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

pair<int, int> kthSmallestLargest(vector<int> arr, int n, int k) {
    pair<int, int> p;
    for (int i = 0; i < n - 1; i++) {         // first we do sorting
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }
    //Write your code here
    // kth smallest
    int small = -1;
    int large = -1;
    int indx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[i + 1])
            indx += 1;
        if (indx == k - 1) // indx will be k-1 if it was sorted
        {
            small = i + 1;  // here indx will be acc to i
            break;
        }
    }

    // For kth largest
    int indxx = 0;
    for (int i = n - 1; i >= 0; i--) // from reverse side
    {
        if (arr[i] > arr[i - 1])
            indxx += 1;
        if (indxx == k - 1) // kth will be k-1 from back if it was sorted
        {
            large = i - 1;
            break;
        }
    }
    if (large == -1)
        p.first = -1;
    else
        p.first = arr[large];
    if (small == -1)
        p.second = -1;
    else
        cout << arr[small] << " ";

    return p;
}

int main() {
    freopen("output.txt", "w", stdout);
    srand(time(NULL));
    int t = 5;
    cout << "======================================" << endl;
    cout << "            Test Case: " << t << "           " << endl;
    cout << "======================================" << endl;
    int i = 1;
    while (i <= t) {
        cout << "Test case No: " << "[" << i << "]" << endl;
        int n = rand() % 11;
        cout << "Number of Element: " << n << endl;
        int d = rand() % n;
        cout << "Kth: " << d << endl;
        cout << "Array: " << endl;
        vector<int> arr(n);
        for (int m = 0; m < n; m++) {
            arr[m] = rand() % 11;

        }
        sort(arr.begin(), arr.end());
        for (int j = 0; j < n; ++j) {
            cout << arr[j] << " ";
        }

        cout << endl;

        //Add your Funtion here!!
        KthSAndL(arr, n, d);

        pair<int, int> MySolution = KthSAndL(arr, n, d);
        pair<int, int> ActualSolution = kthSmallestLargest(arr, n, d);
        if (MySolution.first != ActualSolution.first && MySolution.second != ActualSolution.second) {
            cout << "[❌]Test Case Failed: Wrong Answer" << endl;
            cout << "Your Answer: " << MySolution.first << " " << MySolution.second << endl;
            cout << "Actual Answer: " << ActualSolution.first << " " << ActualSolution.second << endl;
        } else {
            cout << "[✅]Test Case Pass: Correct Answer" << endl;
            cout << "Your Answer: " << MySolution.first << " " << MySolution.second << endl;
        }

        cout << endl;
        cout << "======================================" << endl;
        i++;
    }

    return 0;
}