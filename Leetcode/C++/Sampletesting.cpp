#include <bits/stdc++.h>
using namespace std;



int main(){

    int rangeLower, RangeUper;
    cin >> rangeLower >> RangeUper;
    cout << "Range Lower: " << rangeLower << ", " << "Range Upper: " << RangeUper << endl;
    for(int i =rangeLower; i<=RangeUper;i++){
        bool PrimeCheck = true;
        for (int j = 2; j < i; j++) {
            if(i%j==0){
                PrimeCheck = false;
                continue;
            }
        }
        if(PrimeCheck == true){
            cout << i << " ";
        }
    }

    return 0;
}