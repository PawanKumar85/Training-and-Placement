#include <iostream>
#include <stdexcept>
using namespace std;

class OverSpeed : public exception
{
    int speed;
    public:
    const char * what() const throw()
    {
        return "Check Your Car Speed";
    }
    void setSpeed(int s)
    {
        speed = speed;
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
    catch()
    {
        cout << s.what();
        s.getSpeed();
    }
    return 0;
}