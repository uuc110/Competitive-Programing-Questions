#include <bits/stdc++.h>
using namespace std;

    void print(const vector<int> &data){
        for(int i : data){
            cout << i << " ";
        }
        cout << endl;
    }

    vector<int> PlusOne(vector<int> digits, int n)
    {

        if(digits[0] < 9){
            digits[0]++;
            return digits;
        }

        if(digits[n-1] >= 9){
            digits[n-1] = 0;

        }
        return digits;
    }

    vector<int> Correctsolution(vector<int> digits, int n){
        for(int i = n-1; i>=0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else
                digits[i] = 0;

        }

        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }


int main(){
//    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    srand(time(NULL));
    int t= rand() % 10 +1;
    cout << "Test Case: " << t << endl;
    int m=1;
    while(m<=t){
        cout << "=========[ TEST CASE " << m << " ]==========" << endl;
        int n = rand() % 10 +1 ;
        cout << "Input: " << n << endl;
        vector<int> arr(n);
        cout << "Array: ";
        for(int i=0; i<n; i++){
            arr[i] = rand() % 10;
            cout << arr[i] << " ";
        }
        cout << endl;

//        vector<int> arr = {11};
//
//        int n = arr.size();
        vector<int> mySolution = PlusOne(arr,n);
        vector<int> CorrectSolution = Correctsolution(arr,n) ;
        if(mySolution == CorrectSolution){
            cout << "[✅] TEST CASE PASS" << endl;
            cout << "Your Answer: ";
            print(PlusOne(arr,n));
            cout << endl;
        }else{
            cout << "[❌] TEST CASE FAILED" << endl;
            cout << "Your Answer: ";
            print(PlusOne(arr,n));
            cout << "Correct Answer: ";
            print(Correctsolution(arr,n));
            cout << endl;
        }
        if(m == t){
            cout << "==================================";
        }
        ++m;
    }
}