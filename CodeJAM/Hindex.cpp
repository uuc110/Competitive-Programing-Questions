#include <iostream>
#include <vector>
using namespace std;

vector<int> HIndex(vector<int> &arr, int n){
    vector<int> ans(n);
    int count = 0;
    int cit = 0;
    int i=0, j=1;
    while(i<n && j< n){
        if(arr[i] != arr[j]){
            cit++;
            ans[i] = cit;
        }
        i++;j++;
    }
    return ans;
}

void print(vector<int> data){
    for(int i=0; i< data.size();i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<int> arr(n);
        for(int i=0; i< n;i++){
            cin >> arr[i];
        }
        auto ans = HIndex(arr, n);
        print(ans);
    }
}