#include <iostream>
using namespace std;

int solve(string s)
{
    int res = 0;
    for(auto i : s)
    {
        int x = i - 'A' + 1;
        res = res * 26 + x;
    }
    return res;
}

int main()
{
    string s = "ZY";
    cout << solve(s) << endl;
}