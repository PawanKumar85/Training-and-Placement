//  WAP to print your name, age and city and pin code on screen (Using Class)

#include <iostream>
#include <string>
using namespace std;

class selfInfo
{
    string name;
    int age;
    string city;
    int pincode;

public:
    selfInfo(string name, int age, string city, int pincode)
    {
        this->name = name;
        this->age = age;
        this->city = city;
        this->pincode = pincode;
    }

    void print()
    {
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "City : " << this->city << endl;
        cout << "Pincode : " << this->pincode << endl;
    }
};

int main()
{
    
    string name,city;
    int age,pincode;

    name = "Pawan Kumar";
    age = 20;
    city = "Pune";
    pincode = 411015;
    selfInfo obj(name,age,city,pincode);
    obj.print();
    return 0;
}
