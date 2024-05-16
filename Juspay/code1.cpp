#include <iostream>
#include <stack>
using namespace std;

void solve(string &S)
{
    stack<string> st;
    string s1;

    for(auto i : S)
    {
        if(i == '.')
        {
            st.push(s1);
            s1.clear();
        }
        else
        {
            s1 += i;
        }
    }

    st.push(s1);

    S.clear();
    while(!st.empty())
    {
        string top = st.top();
        S += top;
        st.pop();

        if(!st.empty())
        {
            S += '.';
        }
    }
}

int main()
{
    string s = "pqr.mno";
    solve(s);
    cout << s;
    return 0;
}