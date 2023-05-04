#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int bulbSwitch(int n) {
        //start the vector from 1
        vector<bool> bulb(n+1, true);

        int i=1;
        while (i <= n) {
            cout << "Round: " << i << endl;
            print(bulb);
            for (int j = 2; j <= n; j += 2) {
                bulb[j] = !bulb[j];
            }

            cout << endl;
            i++;
        }
        int count =0;
        for(auto ans : bulb){
            if(ans){
                count++;
            }
        }
        return count;
    }
private:
    void print(vector<bool> bulb){
        for(int i=1; i<bulb.size();i++){
            if (bulb[i]) {
                cout << "ON" << " ";
            }else{
                cout << "OFF" << " ";
            }
        }
        cout << endl;
    }
};

int main(){
    Solution s;
    cout << s.bulbSwitch(3) << endl;

    return 0;
}