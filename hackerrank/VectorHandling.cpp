#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, a ,b;
    vector<int> x;
    cin >> N;
    for(int i=0; i< N;i++){
        cin >> x[i];
    }
    cin >> a >> b;

//    x.erase(x.begin()+1);
    x.erase(x.begin()+2,x.begin()+4);

    for(int i=0; i< x.size();i++){
        cout << x[i] << " ";
    }
    return 0;
}
