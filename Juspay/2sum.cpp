#include <iostream>
#include <map>
#include <vector>
using namespace std;

void print(vector<int> ans)
{
    for(auto i : ans)
        cout << i << " ";
    cout << endl;
}

vector<int> solve(vector<int> a,int target)
{
    map<int,int> mp;

    for(int i = 0;i < a.size();i++)
    {
        int x = target - a[i];

        if(mp.count(x)) return {i,mp[x]};
        mp[a[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> a = {3,2,3};
    int target = 6;

    vector<int> ans = solve(a,target);
    print(ans);
}