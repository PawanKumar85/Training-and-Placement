#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

   

string solve(int n)
{
    map<int,char> mp;
    int count = 1;
    char i;
    for(i = 65;i < 90;i++)
    {
        mp[count++] = i;
    }
    mp[0] = i;

    string ans;

    while(n > 0)
    {
        int x = n%26;
        if(x == 0)
            n--;
        ans += mp[x];
        n = n/26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    cout << solve(701);
}