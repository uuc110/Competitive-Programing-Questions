#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    int r,c;
    while(t--){
    cin >> r >> c;
    for(int i=0 ;i < 2*r+1;i++){
        for(int j=0;i< 2*c+1;j++){
            if(i == 0 || i==1 && j==0 || j== 1){
                cout << ".";
            }
            else if(i%2==0 || j%2==0){
                cout << "+";
            }
            else if(i%2!=0 || j%2!=0){
                cout << "-";
            }
        }
        cout << endl;
    }

    }
    return 0;
}