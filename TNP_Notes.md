# Date : 18 - April - 2024
## Template are expanded at the compile time 
**Like this micros:**
The difference is,that the compiler does type-checking before template expansion.
* Source code contains only _function/class_ ,but compiled code may contain multiple copies of the some _function / class_.

## Function Template 
Class template like function templates,class templates are useful when a class define something that is independent of the data type

```
#include <iostream>
using namespace std;

template <typename T>
// We can also use classname in place of typename 
// both are same
// we also define both in angular bracket <typename,class>

class A{
    public :
    A(T x)
    {
        cout << x << endl;
    }
};

int main()
{
    A <int> ob(45);
    A <float> ob1(5.6);
    A <float> ob2(5.89);
    return 0;
}
```

#### Output
```
45
5.6
5.89
```

### Example 01
```
#include <iostream>
using namespace std;

template <typename T>

class Student{
    string student_name;
    T total_marks;

    public:
    Student();
    Student(string student_name,T total_marks)
    {
        this.student_name = student_name;
        this.total_marks = total_marks;
    }

    void print()
    {
        cout << "Student Name : " << student_name << endl;
        cout << "Total Marks : " << total_marks << endl;
    }
};

int main()
{
    Student<int> s1("Ram",100);
    Student<float> s2("Amit",200.0);

    s1.print();
    s2.print();
    return 0;
}
```

## Example 02

```
#include <iostream>
using namespace std;

template <typename T,typename U>

void findMax(T x,U y)
{
    T z = (x > y) ? x : y;
    cout << z;
}

int main()
{
    findMax(x,y);
    return 0;
}
```

## STD (Standard Template Library)

This STD is a set of template classes to provide command programming data structures and function such as lists,stack,array etc.

It Library of:
1. Container
2.  Algorithms
3.  Iterators

## Containers:
The STL provide s range of containers:
Eg. 
    
* Vector
* list
* map
* set
* stack

which can be used to store and manupulate data.

## Algorithms:
The STL provide  a range of algorithms,
eg:
 * sort
 * find
 * binary_search

which can be used to manipulate data stored in containers.

## Iterators:
Iterators are objects that provide a way to travers the elements of a containers.

## Array functions
* size()
* begin()
* end()
* sort()  --->  *// Reqired Header file : algorithm*
* reverse()
* max_elemet()
* min_element()
* count()
* find()   ---> *// time complexity = O(n)*
* remove()
* binary_search(v.begin(),v.end(),val)  ---> *// it return bool value  // time complexity = O(nlog(n))* 
* fill()
* swap()
* .at(index);
* .data()  --->*// address of first element*
* front()
* back()


## Array STL

```
#include <iostream>
#include <array> 
int main()
{   
    // array <datatype,number of elements> name
    array<int,4> myarray = {4, 26, 80, 14} ;
    for(auto i : myarray)
        cout << i << " ";
}
```

# Date : 22 - 04 - 2024 (Monday)

```
#include <iostream>
#include <array>
#include <alogrithm>
using namespace std;

int main()
{
    array<int,5> arr = {7,2,1,10,8};

    int n = arr.size();
    // output = size of the array = 5;

    sort(arr.begin(),arr.end());
    // Output 1 2 7 8 10

    auto ptr = arr.begin();
    // it return the address of first element

    auto ptr2 = arr.end();
    // it return address of n + 1th location

    reverse(arr.begin(),arr.end());
    // Outpur = 8 10 1 2 7

    find(arr.begin(),arr.end(),val); 
    // it return bool value
    // And its time complexity = O(n)

    int x = count(arr.begin(),arr.end(),val);
    // it return at total count of val in array

    auto maxi = *max_element(arr.begin(),arr.end());
    // it returns the max element in array

    auto mini = *min_element(arr.begin(),arr.end());
    // it return the min element in array

    auto rm = remove(arr.begin(),arr.end(),val);
    int n1 = distance(arr.begin(),rm);
    for(int i = 0; i <n1;i++)
        cout << arr[i] << " ";

    return 0;
}
```

# Date : 30 - 04 - 2024 (Tuesday)

## Function Pointer

* **Function pointer** is a powerful concept that allows you to store the memory address of a function. You can use function pointers to invoke functions dynamically, pass them as arguments to other functions, and even simulate call-by-reference behavior.

```
    #include <iostream>
    using namespace std;

    void show(int x)
    {
        cout << "Pawan" << x;
    }

    int main()
    {
        void (*fptr)(int) = &show;
        (*fptr)(10);
        return 0;
    }
```
Alternative,
```
    #include <iostream>
    using namespace std;

    void show(int x)
    {
        cout << "Pawan" << x;
    }

    int main()
    {
        void (*fptr)(int) = show;
        fptr(10);
        return 0;
    }
```

## Example 01

```
#include <iostream>
using namespace std;

void add(int x,int y)
{
    cout << "ADD :" << x + y;
}

void sub(int x,int y)
{
    cout << " SUB :" << x - y;
}

void multi(int x,int y)
{
    cout << " MULTI :" << x * y;
}

int main()
{
    void (*fptr[])(int,int) = {add,sub,multi};
    int a = 10;
    int b = 20;
    
    int ch;
    cin >> ch;

    (*fptr[ch])(a,b);

    return 0;
}
```

## Lambda Expression (C++ 11)
* It remove the complexity of function pointer.
* It is also called as anonymous function.
* It is inline anonymous function as an expression to initialize the function pointer.
* By calling function pointer we can run the set of statement of lambda expression.
* In the default case, it does not have access to any of the variable - with in the main function.
* To get the access to those,it is required to make some modification to the capture list of expression.
* Syntax
```
[capture list] (parameter list) -> return type {
    function body
}
```
## Code - 01
```
#include <iostream>
using namespace std;

int main()
{
    void (*ptr)() = [] {cout << "Pawan";};

    auto ptr1 = [] {cout << "Pawan";};

    ptr();
    return 0;
}
```

## Code - 02
```
#include <iostream>
using namespace std;

int main()
{
    void (*ptr)() = [] {
        int x = 10;
        int y = 20;
        int z - x + y;
        cout << z;
    };

    ptr();
    return 0;
}
```

## Code - 03
**Lambda Expression non parametrise.**
```
#include <iostream>
using namespace std;

int main()
{
   int x = 10,y = 20,z; // it means x and y are const but z is modifiable

   auto ptr = [=,&z](){
    z = x + y;
    cout << "Value is : " << z;
   };
   ptr();
   return 0;
}
```

## Code - 04
**Lambda Expression with parametrise.**
```
#include <iostream>
using namespace std;

int main()
{
   auto ptr = [=](int x,int y,int &z)
   {
    z = x + y;
    cout << z << endl;
   };

    int a = 10,b = 20,c = 0;
    cout << c << endl;
    ptr(a,b,c);
    cout << c << endl;
    return 0;
}
```

## Code - 05
```
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
```

## Vector
```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> ans)
{
    for(auto i : ans)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> v = {4,6,8,6,2,3,1};
    sort(v.begin(),v.end(),[](int a,int b){return a < b;});
    display(v);
    return 0;
} 
```