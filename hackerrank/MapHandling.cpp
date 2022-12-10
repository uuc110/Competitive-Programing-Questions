#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

vector<int> SumOfMap(map<string, int> &mp){
    vector<int> v;
    int sum = 0;
    string mem;
    for(auto &x: mp){
        mem = x.first;
        if(x.first == mem){
            sum += x.second;
        }else{
            v.emplace_back(sum);
        }
    }
    return v;
}


int main() {
    int q, type, y;
    string x;
    map<string, int> mp1;
    cin >>q;

    for(int i =0; i< q;i++){
        cin >> type;
        if(type == 1){
            getline(cin, x);
            cin >> y;
            mp1.insert(make_pair(x, y));
        }else{
            getline(cin, x);
            mp1.insert(make_pair(x, 0));
        }
    }
    auto ans = SumOfMap(mp1);
    for(auto i: ans){
        cout << i << endl;
    }
    return 0;
}



