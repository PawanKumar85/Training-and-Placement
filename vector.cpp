#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> ans)
{
    for(auto i : ans)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> v = {4,6,8,6,2,3,1};
    

    sort(v.begin(),v.end(),[](int a,int b){return a < b;});
    
    display(v);
    return 0;
} 