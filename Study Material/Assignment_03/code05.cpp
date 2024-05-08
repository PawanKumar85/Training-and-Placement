//  Create a class “Mobile” with attributes: brand, price, color. Enter detail of five different mobile.
// (Using Array of object).
// Display total number of mobile having price greater than 5000.
// Display Brand, Price and color for all mobiles for price range 1000 to 10000

#include <iostream>
using namespace std;

class Moblie
{
public:
    string brand;
    int price;
    string color;

public:

    void setDetail(string brand, string color, int price)
    {
        this->brand = brand;
        this->color = color;
        this->price = price;
    }

    void print()
    {
        if (price >= 1000)
        {
            cout << "Brand :" << brand << endl;
            cout << "Color :" << color << endl;
            cout << "Price :" << price << endl;
        }
        else
        {
            cout << "Price is less than 1000" << endl;
        }
    }
};

int main()
{
    Moblie arr[5];
    string brand,color;
    int price;
    for (int i = 0; i < 5; i++)
    {
        cout << "Brand :";
        cin >> brand;
        cout << "Color : ";
        cin >> color;
        cout << "Price :";
        cin >> price;

        cout << endl;
        if(price < 1000)
            cout << "Price should be greater than 1000" <<  endl;
        else{
            arr[i].setDetail(brand,color,price);
        }
    }


    cout << endl;
    for(int i = 0;i<5;i++)
    {
        arr[i].print();
    }
    return 0;
}