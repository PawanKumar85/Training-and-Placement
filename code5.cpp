#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
    cout << "think career think hardwork" << endl;
    // int n = ;
    // int *p = (int*) malloc(n* sizeof(int));
    // int n = 99999999999999999;
    try
    {
        int *ptr = new int[99999999999999999];
    }
    catch(bad_alloc &e)
    {
        cout << e.what();
    }

    cout << "think Maharana !! ";
    return 0;
}