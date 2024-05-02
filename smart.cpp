#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> p1(new int(10));
    weak_ptr<int> p2;

    p2 = p1;
    cout << p1.use_count() << endl;
    cout << p2.use_count() << endl;
    cout << *p1 << endl;
    cout << *(p2.lock()) << endl;

    // p1.reset();
    p2.reset();
    cout << p1.use_count() << endl;
    cout << p2.use_count() << endl;
    return 0;
}