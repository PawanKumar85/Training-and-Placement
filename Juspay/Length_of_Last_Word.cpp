#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

int solve(string s)
{
    stack<pair<string,int>> st;

    int count = 0;
    string str;

    for(auto i : s)
    {
        if(i == ' ')
        {
            if(!str.empty())
            {
                st.push({str,count});
                str.clear();
                count = 0;
            }
        }
        else
        {
            str += i;
            count++;
        }
    }

    if(!str.empty())
    {
        st.push({str,count});
    }

    auto top = st.top();
    return top.second;
}

int main()
{
    string s = "Today is a nice day";
    cout << solve(s);
}