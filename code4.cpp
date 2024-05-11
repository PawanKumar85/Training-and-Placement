#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter size of int block : ";
    cin >> n;

    int *ptr = new int[n];

    cout << sizeof(ptr) << endl;
    cout << n * sizeof(int) << endl;
    return 0;
}

