# Interview Question

1.  What is the difference b/w DMA in C and C++ ?
2.  What is the difference b/w these 2 statements

```
#include <iostream>
using namespace std;
int main()
{
    int *p = new int(4);
    int *ptr = new int[4];
    return 0;
}
```
3.  Difference b/w these 2 statements
```
#include <iostream>
using namespace std;

int main()
{
    int *p = new int(4);
    int *ptr = new int[4];

    delete p;       // <=
    delete [] ptr;  // <=
    return 0;
}
``` 