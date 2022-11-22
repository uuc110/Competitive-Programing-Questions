#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
//    int pass(int n){
//        int bad = n;
//        return bad;
//    }
//
//    int bad = pass(n)
//    bool isBadVersion(int n){
//        if(n == bad){
//            return false;
//        }
//        else true;
//    }

    int firstBadVersion(int n) {
        int l=1, h = n, mid;
        while(l<=h){
            mid = l + (h-l)/2;
            if(isBadVersion(mid)){
                h = mid
            }
            else{
               l = mid;
            }
        }
        return h;
    }
};

//1 = true;
//2 = true
//3 = false
//4 = false
//============
//5 = false
//6 = false
//7 = false
//8 = false
//9 = false
//10 = false
//

int main(){

    clock_t start = clock();
    std::ios::sync_with_stdio(false);
    Solution s;
    srand(time(NULL));
    freopen("output.txt" , "w" ,stdout);
    int t = 10;

    while (t--) {
        cout << "TestCase : " << t <<" | ";
        int n = rand() % 50 + 1;
        int bad = n;
        bool arr[n];
        for (int i = bad; i < n; ++i) {
            arr[i] = false;
        }
//        s.pass(bad);
        s.isBadVersion(2);
        if (bad == ans) {
            cout << "✅ correct solution \n";
        } else {
            cout << "❌ wrong solution \n";
            cout << "Correct :" << bad << "\n";
            cout << "Your :" << s.firstBadVersion(n) << "\n";
        }
    }
//    cout << "\n";
    cout << "Time taken: " << (double)(clock() - start) / (double)CLOCKS_PER_SEC << " \n";
    return 0;
}