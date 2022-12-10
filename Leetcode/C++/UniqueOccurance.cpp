#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool UniqueOccurance (vector<int> &arr){
        unordered_map<int, int> mp;
        unordered_set<int> st;
        for(int i: arr){
            mp[i]++;
        }
        for(auto &x: mp)
            if(!st.insert(x.second).second) return false;
        return true;
    }
};

 void print(vector<int> &data){
         for(int i : data){
             cout << i << " ";
         }
         cout << endl;
     }

int main(){
    Solution s;
    vector<int> a={1,2,2,1,1,3};
    vector<int> ans = s.UniqueOccurance(a);
    print(ans);

    return 0;
}