#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> solve(vector<int> a)
{
    int n = a.size();
    sort(a.begin(),a.end());
    set<vector<int>> st;
    vector<vector<int>> v;

    for(int i = 0;i < n - 3;i++)
    {
        for(int j = i + 1; j < n -2;j++)
        {
            int l = j + 1, r = n - 1;
            while(l < r)
            {
                if(a[i] + a[j] + a[l] + a[r] < 0)
                    l++;
                else if(a[i] + a[j] + a[l] + a[r] > 0)
                    r--;
                else{
                    st.insert({a[i],a[j],a[l],a[r]});
                    l++;
                    r--;
                }
            }
        }
    }

    for(auto i:st)
        v.push_back(i);

    return v;
}

int main()
{
    vector<int> a = {-2,0,2,-1,1};
    vector<vector<int>> ans = solve(a);

    for(auto i : ans)
    {
        for(auto j : i)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}