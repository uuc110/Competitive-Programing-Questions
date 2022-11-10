#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> SqrOfArr(vector<int> &arr, int n){

}

int main(){
    int n;
    cin >> n;
   vector<int> arr(n);

   for (int & i : arr) {
        cin >> i;
    }

    vector<int> Squared = SqrOfArr(arr, n);



    for (int i = 0; i < n; ++i) {
        cout << Squared[i] << " ";
    }
    return 0;





}