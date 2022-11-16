#include "bits/stdc++.h"
using namespace std;


class Solution{

int pick = rand() % 50;
public:
    int getter(){
        return pick;
    }
    int guess(int n){
        if(n == pick) return 0;
        else if(n < pick) return 1;
        else return -1;

    }
    int guessNumber(int n){
        int l=1, h = n, mid;
        while(l <= h){
            mid = (l+h)/2;
            if(guess(mid) == 1){
                l = mid +1;
            }
            else if(guess(mid) == -1){
                h = mid-1;
            }else{
                return mid;
            }
        }
        return l;
    }
};


int main(){
    freopen("output.txt", "w", stdout);
    srand(time(NULL));
    Solution s;
    int t = rand() % 10 + 1;
    cout << "Number of Test Case :" << t << endl;
    int i = 0;
    while (i < t) {
        cout << "testcase: " << i + 1 << endl;
        int n = rand() % 100 + 1;
        cout << "n = " << n << endl;
        cout << "Pick: " << s.getter() << endl;
        cout << "Output: " << s.guessNumber(n) << endl;
        i++;
        cout << "=================================================" << endl;
    }
    return 0;
}