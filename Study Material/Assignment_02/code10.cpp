//  Write a program to read time in hh:mm:ss and display answer I n only seconds. For Example if user 
// enters 
//  2:15:30 then it should display 8130 seconds.
//  Input:
//  Enter Hours: 2
//  Enter minutes: 15
//  Seconds: 30
//  Output: 8130 second

#include <iostream>
using namespace std;

class Time{
    int hrs;
    int min;
    int sec;   
    int total;

    public:
    Time(int hrs,int min,int sec)
    {
        this->hrs = hrs;
        this->min = min;
        this->sec = sec;
        calculate();
        print();
    }

    void calculate()
    {
        this->total = (hrs * 3600) + (min * 60) + (sec);
    }
    void print()
    {
        cout << "Total Sec : " << this->total << endl;
    }
};

int main()
{
    Time time(1,01,01);
    return 0;
}
