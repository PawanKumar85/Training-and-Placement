#include <iostream>
using namespace std;

int main()
{
    int m = 2,n = 3;
   auto ptr = [=](int x,int y,int &z)
   {
    z = x + y + m + n;
   };

    int a = 10,b = 20,c = 0;
    cout << c << endl;
    ptr(a,b,c);
    cout << c << endl;
    return 0;
}