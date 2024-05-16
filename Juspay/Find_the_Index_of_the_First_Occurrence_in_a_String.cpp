#include <iostream>
#include <string>
using namespace std;

int solve(string str1,string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    int diff = n1 - n2;

    for(int i = 0; i <= diff;i++)
    {
        if(str1.substr(i,n2) == str2)
            return i;
    }
    return -1;
}

int main()
{
    string s1 = "leetcode";
    string s2 = "leeto";

    cout << "Index : " << solve(s1,s2) << endl;
}