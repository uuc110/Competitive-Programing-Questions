#include <iostream>
using namespace std;
int main()
{
    int n, i, count = 0;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}