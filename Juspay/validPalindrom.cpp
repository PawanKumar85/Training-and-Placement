#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool solve(string s)
{
    stack<char> st;

    for(auto i : s)
    {
        if(isalnum(i))
            st.push(tolower(i));
    }

    for(auto i : s)
    {
        if(isalnum(i))
        {
            if(tolower(i) != st.top()) 
                return false;
            
            st.pop();
        }
    }

    return true;
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    if(solve(str))
        cout << "true";
    else
        cout << "false";
}