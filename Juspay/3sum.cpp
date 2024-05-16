#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

class Print
{
    public:
    Print(vector<int> v)
    {
        for(auto i : v)
            cout << i << " ";
        cout << endl;
    }

    Print(vector<vector<int>> v)
    {
        for(auto i : v)
        {
            cout << "[";
            for(auto j : i)
                cout << j << " ";
            cout << "]";
            cout << endl;
        }
        cout << endl;
    }
};

class Solution{
    public:
        vector<vector<int>> Approch1(vector<int> a)
        {
            set<vector<int>> ans;
            vector<vector<int>> v;

            int n = a.size();

            sort(a.begin(),a.end());
            for(int i = 0;i < n - 2;i++)
            {
                for(int j = i + 1; j < n - 1;j++)
                {
                    for(int k = j + 1;k < n;k++)
                    {
                        if((a[i] + a[j] + a[k] == 0) && i != j && j != k && k != i)
                        {
                            ans.insert({a[i],a[j],a[k]});
                        }
                    }
                }
            }

            for(auto i : ans)
                v.push_back(i);
            
            return v;
        }

        vector<vector<int>> Approch2(vector<int>a)
        {
            set<vector<int>> ans;
            vector<vector<int>> v;

            int n = a.size();
            sort(a.begin(),a.end());

            for(int i = 0;i < n - 2;i++)
            {
                int low = i + 1;
                int high = n - 1;

                while(low < high)
                {
                    if(a[i] + a[low] + a[high] < 0)
                        low++;
                    else if(a[i] + a[low] + a[high] > 0)
                        high--;
                    else{
                        ans.insert({a[i],a[low],a[high]});
                        low++;
                        high--;
                    }
                }
            }

            for(auto i : ans)
                v.push_back(i);
            
            return v;
        }
};

int main()
{
    vector<int> a = {-1,0,1,2,-1,-4};
    Print obj(a);
    Solution sol;
    vector<vector<int>>ans = sol.Approch2(a);
    Print obj2(ans);
    return 0;
}