// Create a class “Mobile” with attributes: brand, price, color, width, height. Use
// constructor to set default values of these attributes. Write function to display details of all
// attributes

#include <iostream>
using namespace std;

class Moblie
{
    string brand;
    int price;
    string color;
    int width;
    int height;

public:
    Moblie()
    {
        this->brand = "No-kia";
        this->price = 10000;
        this->color = "Black";
        this->width = 100;
        this->height = 100;
    }
    Moblie(string brand, int price, string color, int width, int height)
    {
        this->brand = brand;
        this->price = price;
        this->color = color;
        this->width = width;
        this->height = height;
    }

    void display()
    {
        cout << "Branch :" << brand << endl;
        cout << "Price :" << price << endl;
        cout << "Color :" << color << endl;
        cout << "Width :" << width << endl;
        cout << "Height :" << height << endl;
    }
};

int main()
{
    Moblie nokia;
    nokia.display();
    return 0;
}