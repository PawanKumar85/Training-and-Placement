#include <iostream>
using namespace std;

int main()
{
    int *p = new int(4);
    int *ptr = new int[4];

    cout << sizeof(p) << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(*ptr) << endl;
    return 0;
}