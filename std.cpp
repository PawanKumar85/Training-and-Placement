#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,4> myarray = {4, 26, 80, 14} ;
    for(auto i : myarray)
        cout << i << " ";
}