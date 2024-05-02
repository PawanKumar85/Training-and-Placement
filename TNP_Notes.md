# Date : 18 - April - 2024

## Template are expanded at the compile time

**Like this micros:**
The difference is,that the compiler does type-checking before template expansion.

- Source code contains only _function/class_ ,but compiled code may contain multiple copies of the some _function / class_.

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
2. Algorithms
3. Iterators

## Containers:

The STL provide s range of containers:
Eg.

- Vector
- list
- map
- set
- stack

which can be used to store and manupulate data.

## Algorithms:

The STL provide a range of algorithms,
eg:

- sort
- find
- binary_search

which can be used to manipulate data stored in containers.

## Iterators:

Iterators are objects that provide a way to travers the elements of a containers.

## Array functions

- size()
- begin()
- end()
- sort() ---> _// Reqired Header file : algorithm_
- reverse()
- max_elemet()
- min_element()
- count()
- find() ---> _// time complexity = O(n)_
- remove()
- binary_search(v.begin(),v.end(),val) ---> _// it return bool value // time complexity = O(nlog(n))_
- fill()
- swap()
- .at(index);
- .data() --->_// address of first element_
- front()
- back()

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

- **Function pointer** is a powerful concept that allows you to store the memory address of a function. You can use function pointers to invoke functions dynamically, pass them as arguments to other functions, and even simulate call-by-reference behavior.

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

- It remove the complexity of function pointer.
- It is also called as anonymous function.
- It is inline anonymous function as an expression to initialize the function pointer.
- By calling function pointer we can run the set of statement of lambda expression.
- In the default case, it does not have access to any of the variable - with in the main function.
- To get the access to those,it is required to make some modification to the capture list of expression.
- Syntax

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

# 01 - 05 - 2024 (Wednesday)

## Exception Handling

An Exception is abnormal condition that arises during the running of program our program is terminated suddenly with some error.

Exception occurs during the running of the program (run time).

### Handler

- **try**
  - _The try block is used to enclose the code that might throw an exception. When an exception is thrown within a try block, the control is transferred to the corresponding catch block, which handles the exception._
- **catch**
  - _The catch block is used to handle exceptions that are thrown within a try block. When an exception is thrown within a try block, the control is transferred to the corresponding catch block, which handles the exception._
- **throw**
  - _The throw keyword is used to throw an exception in C++. When an exception is thrown, the control is transferred to the nearest enclosing try block, which handles the exception._

## Code - 01

```
#include <iostream>
using namespace std;

int main()
{
    cout <<"Hello";
    cout <<"Java";
    cout << string("Hello H R U") << endl; // correct
    cout << string("Hello H R U").substr(5) << endl; // correct
    cout << string("Hello H R U").substr(15) << endl; // flash error
    cout <<"Pawan";
    return 0;
}
```

**Output:** _(Error)_

```
HelloJavaHello H R U
 H R U
terminate called after throwing an instance of 'std::out_of_range'
  what():  basic_string::substr: __pos (which is 15) > this->size() (which is 11)
```

## Remove the Exception Handling

```
#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    cout <<"Hello";
    cout <<"Java";
    try{
        cout << string("Hello H R U").substr(5) << endl;
    }
    catch(out_of_range &e)
    {
        cout << e.what() << endl;
    }
    cout << "Pawan" << endl;
    return 0;
}
```

## Code - 02

```
#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

int main()
{
    int x = 10;
    int y = 0; // try y = 3;
    int z;

    try
    {
        if (y == 0)
            throw "Zero Divison Error";
        z = x / y;
        cout << z << endl;
    }

    catch (const char *e)
    {
        cout << e << endl;
    }

    cout << "Pawan";
    return 0;
}
```

**Output** :

```
Zero Divison Error
Pawan
```

Alternative : **(Good Practice)**

```
#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

int main()
{
    int x = 10;
    int y = 0; // try y = 3;
    int z;

    try
    {
        if (y == 0)
            throw runtime_error("Zero Divison Error");
        z = x / y;
        cout << z << endl;
    }

    catch (runtime_error &e)
    {
        cout << e.what() << endl;
    }

    cout << "Pawan";
    return 0;
}
```

## Code - 03

If there are multiple catch() in the program then the catch() with the most specific exception type should be written first.

```
#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

int main()
{
    try{
        // try each comment

        // throw "Some Error";
        // throw 10;
        // throw runtime_error("Error");
    }
    catch(const char *e){
        cout << "String " << e << endl;
    }
    catch(int x){
        cout << "int " << x << endl;
    }
    catch(runtime_error){
        cout <<"run time"<<e.what()<< endl;
    }
    return 0;
}
```

Alternative : **(Good Practice)**

```
#include <stdexcept>
#include <exception>
using namespace std;

int main()
{
    try{
        // try each comment

        throw "Some Error";
        throw 10;
        throw runtime_error("Error");
    }
    catch(...)
    {
        cout << "Some Error" << endl;
    }
    return 0;
}
```

## Properties of Exceptions

There is a special cstch block called **catch all** block, written as **catch(...)** which can catch all types of exceptions.

- Exceptions are objects
- Exceptions are thrown using throw
- Exceptions are caught using catch
- Exceptions are handled using try and catch

**Notes** :
In c++, all exceptions are unchecked i.e the compiler does not check whether the exception is handled or not.

So,it is not neccessary to specify all uncatch exceptions in a function declation.

## Code - 04

```
#include <iostream>
#include <stdexception>
using namespace std;

class OverSpeed : public exception
{
    int speed;
    public:
    const char * what() const throw()
    {
        return "Check Your Car Speed";
    }
    void setSpeed(int speed)
    {
        this.speed = speed;
    }
    void getSpeed()
    {
        cout << "Your Speed : " << speed;
    }
};

class Car{
    public:
    Car()
    {
        this.speed = 0;
        cout << "Your Car speed : << speed << endl;
    }

    void speedLimit()
    {
        for(;;)
        {
            speed += 10;
            cout << "Your Car speed : << speed << endl;

            if(speed > 100)
            {
                OverSpeed s;
                s.setSpeed(speed);
                throw s;
            }
        }
    }
};

int main()
{
    Car obj;
    try{
        obj.speedLimit();
    }
    catch(Overspeed s)
    {
        cout << s.what();
        s.getSpeed();
    }
    return 0;
}
```

# 02 - 05 - 2024 (Thursday)

## Smart Pointer (C++ 11)

A smart pointer is a template class over a pointer with an operator like `->` and `*` overload.

The object of the smart pointer close look like normal pointers. But.unlike Normal pointer,it can deallocate and free destroyed object memory.

## Types of Smart Pointer

- unique_ptr
- shared_ptr
- weak_ptr

## Advantages of smart pointer

1. Resource Management
2. Avoiding Memory Leak
3. Avoiding Dangling Pointer
4. Pointer Owership
5. Simplify Memory Management

## Disadvantages of smart pointer

1. Performance overhead
2. Complicated to use
3. Complicated to understand

### Example

```
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    int *obj = new int(10);

    unique_ptr<int> obj(new int(10)); // good practice
    if(condition)
        return value;
    delete obj;
    return 0;
}
```

## Unique_ptr

1. A unique_ptr is a container for a raw pointer,
2. Unique_ptr explicitly prevents copying of its contained pointer,but move function can be used to tranfer ownership of the contaained pointer to another unique_ptr.
3. No support of copy constructor and copy assignment operator.

### Syntax

```
int main(){
    unique_ptr<T> obj(new T);
}
```

### Example: 01

```
#include <iostream>
#include <memory>
using namespace std;

class A{
    public:
    A()
    {
        cout << "Const. is created" << endl;
    }

    ~A()
    {
        cout << "Const. is deleted" << endl;
    }
};

int main()
{
    unique_ptr<A> obj(new A());
    // unique smart pointer self deallocates the memory
    // when the object is destroyed
    return 0;
}
```

### Example : 02

```
#include <iostream>
#include <memory>
using namespace std;
int main()
{
    unique_ptr<int> p1(new int(10));
    unique_ptr<int> p2;
    // p2 = p1; // flash an error (invalid)
    p2 = move(p1);
    // move the ownership of p1 to p2
    // p1 = nullptr;
    // p1 is now empty

    // cout << *p1 << endl; // flash an error (invalid)
    cout << *p2;
    return 0;
}
```

## Shared_ptr

1. A shared_ptr is a pointer that container for a raw pointer.
2. It maintains referance count for the raw pointer.
3. When the last referance counting ownership of its contained pointer in cooperation with all copies of the shared_ptr.
4. An Object referance by the contained raw pointer will be destroyed when and only only when all copies of the shared_ptr have been destroyed.

### Syntax:

```
int main()
{
    shared_ptr<T> obj(new T());
}
```

### Example :

```
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> p1(new int(10));
    shared_ptr<int> p2;

    cout << "before" << endl;
    cout << p1.use_count() << endl;

    p2 = p1;

    cout << "after" << endl;
    cout << "P1 : " << p1.use_count() << endl;
    cout << "P2 : " << p2.use_count() << endl;

    cout << *p1 << " " << *p2 << endl;
    // Dereference p1 and p2 to print their values
    p1.reset();
    // Release the ownership of the memory pointed to by p1
    p2.reset();
    cout << "P1 : " << p1.use_count() << endl;
    cout << "P2 : " << p2.use_count() << endl;
    return 0;
}
```

## Weak_ptr:

1. A weak_ptr is a container for raw pointer.
2. It is created as a copy of a shared_ptr.
3. The existance or destruction of weak_ptr copies of a shared_ptr have no effect on the shared_ptr have no effect on the shared_ptr or its other copies.
4. After all copies of a shared_ptr have been destroyed all weak_ptr copies become empty.

### Weak_ptr

### Example : 01

```
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
```
