// WAP to find area of circle. Area of Circle = PI * r * r Where, PI = 3.14 (Using Class and Object)

#include <iostream>
using namespace std;

class Area
{
    float radius;
    float PI = 3.14;

public:
    void setRadius(float radius)
    {
        this->radius = radius;
    }

    float getArea()
    {
        float area = PI * (radius * radius);
        return area;
    }
};

int main()
{
    Area circle;
    circle.setRadius(5);
    cout << "Area of circle is : " << circle.getArea() << endl;

    return 0;
}