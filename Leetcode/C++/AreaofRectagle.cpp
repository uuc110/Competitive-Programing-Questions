#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int al1 = abs(ax1) + abs(ax2);
        int ab1 = abs(ay1) + abs(ay2);
        int bl2 = abs(bx1) + abs(bx2);
        int bb2 = abs(by1) + abs(by2);
        int areaofA = al1 * ab1;
        int areaofB = bl2 * bb2;
        int CommonPart = abs(areaofA-areaofB);
        return areaofA + areaofB - CommonPart;
    }

    int ComputeArea(int A, int B, int C, int D, int E, int F, int G, int H)
    {
        int total = (C-A) * (D-B) + (G-E) * (H-F);

        if (C<=E || A>=G || B>=H || D<=F )
            return total;
        else
        {
            vector <int> h;
            h.push_back(A);
            h.push_back(C);
            h.push_back(E);
            h.push_back(G);

            vector <int> v;
            v.push_back(B);
            v.push_back(D);
            v.push_back(F);
            v.push_back(H);

            sort(h.begin(), h.end());
            sort(v.begin(), v.end());

            total = total - (h[2] - h [1]) * (v[2] - v[1]);
            return total;
        }
    }
};

int main(){
    freopen("output.txt", "w", stdout);
    srand(time(NULL));

    Solution s;
    int t = rand() % 10 + 1;
    cout << "Total test case: " << t << endl;
    int i =0;
    while(i <=t){
        int ax1 = rand() % 100;
        int ay1 = rand() % 100;
        int ax2 = rand() % 100;
        int ay2 = rand() % 100;
        int bx1 = rand() % 100;
        int by1 = rand() % 100;
        int bx2 = rand() % 100;
        int by2 = rand() % 100;

        cout << "Case " << i << ": " << endl;
        cout << "ax1: " << ax1 << " ay1: " << ay1 << " ax2: " << ax2 << " ay2: " << ay2 << " bx1: " << bx1 << " by1: " << by1 << " bx2: " << bx2 << " by2: " << by2 << endl;
        auto YourSolution = s.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
        auto CorrectSolution = s.ComputeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
        if(YourSolution == CorrectSolution){
            cout << "✅ Correct" << endl;
        }else{
            cout << "❌ Wrong" << endl;
            cout << "Your Solution: " << YourSolution << endl;
            cout << "Correct Solution: " << CorrectSolution << endl;
        }
        cout << "======================================================================" << endl;
        i++;
    }

    return 0;
}