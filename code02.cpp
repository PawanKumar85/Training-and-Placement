#include <iostream>
using namespace std;

int main()
{
    int *p = new int(4);
    int *ptr = new int[4];
//    int (*pt)[] = new int[4];

    cout << sizeof(p) << endl;
    cout << sizeof(ptr) << endl;
//    cout << sizeof(pt) << endl;  
    return 0;
}

