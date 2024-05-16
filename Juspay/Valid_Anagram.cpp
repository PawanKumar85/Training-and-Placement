#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution{
    public:
        bool solve1(string s,string t)
        {
            unordered_map<char,int> mp;

            for(auto i : s)
                mp[i]++;

            for(auto i : t)
                mp[i]--;

            for(auto i: mp)
            {
                if(i.second != 0)
                    return false;
            }
            return true;
        }

        bool solve2(string s,string t)
        {
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());

            return (s == t) ? true : false;
        }
};

int main()
{
    Solution obj;
    string s = "anagram";
    string t ="nagaram";
    
    if(obj.solve1(s,t))
        cout << "true";
    else
        cout << "false";

    cout << endl;
    if(obj.solve2(s,t))
        cout << "true";
    else
        cout << "false";
}