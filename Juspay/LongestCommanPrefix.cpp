#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(vector<string> v)
{
    if(v.empty())
        return "";
    
    string prefix = v[0];
    int len = prefix.length();

    for(int i = 1; i < v.size();i++)
    {
        string s = v[i];
        while(len > s.length() || prefix != s.substr(0,len))
        {
            len--;
            if(len == 0)    return "";
            prefix = prefix.substr(0,len);
        }
    }
    return prefix;
}

int main()
{
    vector<string> a = {"flower","flow","flight"};
    string ans = solve(a);
    cout << ans;
}