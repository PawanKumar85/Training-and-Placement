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