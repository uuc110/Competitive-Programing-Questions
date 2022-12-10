#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> ans;
    string word;
    for(int i=0; i < str.length()+1;i++) {
        if ( !str.empty() &&(str[i] >= '0' && str[i] <= '9') || str[i] == '-') {
            word += str[i];
        } else {
            ans.emplace_back(stoi(word));
            word.clear();
        }
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}