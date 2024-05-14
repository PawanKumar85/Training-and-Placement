#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 76;
    cout << *p << " " << "Address : "<< p << endl;
    // delete p;
    p = new int(34);
    cout << *p << "Address : " << p << endl;
    return 0;
}