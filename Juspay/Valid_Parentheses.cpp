#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool solve(string s)
{
    stack<char> st;

    for(auto i : s)
    {
        if(st.empty()) 
            st.push(i);
        else if((st.top() == '(' && i == ')') || (st.top() == '{' && i == '}') || (st.top() == '[' && i == ']'))
            st.pop();
        else
            st.push(i);
    }

    return (st.empty()) ? true : false; 
}

int main()
{
    string s = "(]";
    
    if(solve(s))
        cout << "Valid";
    else
        cout << "Not Valid";

    return 0;
}