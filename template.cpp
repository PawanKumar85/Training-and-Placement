#include <iostream>
using namespace std;

template <typename T,typename U>         // T and U define the data type at run time // Both may be or may be not same data type

T show(T x,U y)
{
    return x + y;
}

// function Template 


int main()
{
    cout << show(2,5.6) << endl;
    cout << show(3.5,6) << endl;
    cout << show(3,6) << endl;
    cout << show<string>("Pawan"," Kumar") << endl;

    return 0;
}
