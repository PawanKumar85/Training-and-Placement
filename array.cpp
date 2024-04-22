#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 4> arr = {4, 8, 3, 1};

    auto x = remove(arr.begin(), arr.end(), 5);

    auto n = distance(arr.begin(), x);

    cout << n;

    return 0;
}