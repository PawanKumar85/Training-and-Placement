#include <iostream>
#include <algorithm>
using namespace std;

string solve(string a,string b)
{
    int x = a.size() - 1;
    int y = b.size() - 1;
    int carry = 0;

    string ans;

    while(x >= 0 || y >= 0 || carry)
    {
        if(x >= 0)  carry += a[x--] - '0';
        if(y >= 0)  carry += b[y--] - '0';
        ans += carry%2 + '0';
        carry = carry/2;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string a = "1010";
    string b = "1011";
    cout << "Ans : " << solve(a,b);
}