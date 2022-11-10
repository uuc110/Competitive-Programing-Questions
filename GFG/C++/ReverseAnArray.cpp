#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T != 0) {
        int N;
        cin >> N;
        int long A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = N-1; i >= 0; i--) {
            cout << A[i] << " ";
        }
        cout << endl;
        T--;
    }
        return 0;
}