#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,q,k;
   cin >> n>> q;
   int i = 0;
  while(i < n){
      cin >> k;
      vector<vector<int>> v(n, vector<int>(k));

      for(int l= 0; l < n; l++){
            for(int j = 0; j < k; j++){
                cin >> v[l][j];
            }
        }

      for (int j = 0; j < q; ++j) {
            int x,y;
            cin >> x >> y;
            cout << v[x][y] << endl;
      }
      i++;
  }



    return 0;
}
