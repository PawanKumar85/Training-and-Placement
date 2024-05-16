#include <iostream>
#include <map>
using namespace std;

bool solve(string s,string t)
{
    map<char,char> mp1,mp2;

    for(int i = 0;i < s.size();i++)
    {
        if(!mp1[s[i]] && !mp2[t[i]])
        {
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        else if(mp1[s[i]] != t[i]) return false;
    }
    return true;
}

int main()
{
    string s = "foo";
    string t = "bar";

    if(solve(s,t))
        cout << "true";
    else
        cout << "false";
}