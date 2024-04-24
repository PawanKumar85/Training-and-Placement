# 24 - 04- 2024
## List Function
* front()
* back()
* push_back()
* push_front()
* pop_front()
* pop_back()
* insert()
* erase()
* clear()
* swap()
* remove()
* sort()
* reverse()
* begin()
* end()
* empty()
* size()
* splice()

## List
List : A list in C++ is a container that allows for efficient insertion and deletion of elements from anywhere in the container. It is implemented as a doubly-linked list, which means that each element in the list contains a pointer to the previous and next elements in the list. This allows for constant time insertion and deletion at any point in the list, but makes random access (accessing an element by its index) less efficient than other containers like vector or array.
 ### Code :
```
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void display(list<int> li)
{
    for (auto i : li)
        cout << i << " ";
    cout << endl;
}

bool isEmpty(list<int> li)
{
    if (li.empty())
        return true;
    else
        return false;
}

int main()
{
    

    list<int> li = {1, 2, 3, 4, 5, 56}; // list of 6 elements
    list<int> li2 = {4, 2, 4, 6, 8, 0, 2, 2};   // list of 8 elements

    li.push_front(10);
    // push element in front
    // time Complexity : O(1)

    li.push_back(20);
    // push element in last
    // time complexity : O(n)

    int x = li.front();
    // display the element at front
    // time Complexity : O(1)

    int y = li.back();
    // display the element at last
    // time Complexity : O(n)

    int size = li.size();
    // get the size of list
    // time Complexity : O(n)

    li.clear();
    // clear the list element
    // time Complexity : O(n)

    li.pop_front();
    // pop front element
    // time Complexity : O(1)

    li.pop_back();
    // pop last element
    // time Complexity : O(n)

    li2.sort();
    // sort the li2 element
    // time Complexity : O(nlogn)

    reverse(li2.begin(), li2.end());
    // reverse the list
    // time Complexity : O(n)

    li.splice(li.end(), li2);
    // concating the li2 elements into li at the end
    // time Complexity : O(1)

    li.swap(li2);
    // swap the elemets of li with li2 and vise versa
    // time Complexity : O(1)

    li.remove(3);
    // to remove the element from the list into the ()
    // time Complexity : O(n)

    int x = 100;

    auto p = next(li.begin(),2);

    li.insert(p,x);


    display(li);

}
```

