#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


void miniMaxSum(vector<int> arr) {
    int skip = 0;
    long long int Sum = 0LL; // 64 bit integer to store the sum of the array
    vector<long long int> sum; // vector to store the sum of the array after removing one element
    for (int i=0; i < arr.size(); i++) {
        for(int j=0; j < arr.size();j++){
            if(skip == j){continue;}
            Sum += arr[j];
        }
        sum.emplace_back(Sum);
        Sum = 0;
        skip++;
    }

    long long int MaxSUm = INT64_MIN; //We can also use INT_LEAST64_MAX, and also we have to keep in mind that the
    // sum of the array can be negative, and its should int64_min to get the minimum sum
    long long int MinSUm = INT_LEAST64_MAX; // similarly we can use INT64_MAX to get the maximum sum
    for(auto i : sum){
        if(i > MaxSUm){
            MaxSUm = i;
        }
        if(i < MinSUm){
            MinSUm = i;
        }
    }
    cout << MinSUm << " " << MaxSUm;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
