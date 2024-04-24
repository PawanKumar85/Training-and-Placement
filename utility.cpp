#include <iostream>
using namespace std;

class Array
{
private:
    int *data;
    int size;

public:
    Array(int size)
    {
        this->size = size;
        data = new int[size];
    }

    ~Array()
    {
        delete[] data;
    }

    int getSize()
    {
        return size;
    }

    void setData(int i, int val)
    {
        if (i < 0 || i >= size)
            cout << "out of range" << endl;
        else
            data[i] = val;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
    }

    bool isPresent(int k)
    {
        for(int i = 0; i < size;i++)
        {
            if(data[i] == k)
                return true;
        }
        return false;
    }

    int getValue(int k)
    {
        for(int i = 0; i < size;i++)
        {
            if(data[i] == k)
                return i;
        }
        return 0;
    }
};

int main()
{
    Array arr(5);

    int choice;
    do
    {
        cout << endl;
        cout << "1. Insert Value in Array" << endl;
        cout << "2. Get size of Array" << endl;
        cout << "3. Print" << endl;
        cout << "4. Search" << endl;
        cout << "5. Get Index " << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your Choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                int val;
                for (int i = 0; i < arr.getSize(); i++)
                {
                    cin >> val;
                    arr.setData(i, val);
                }
                break;
            case 2:
                cout << "Size of Array : " << arr.getSize() << endl;
                break;
            case 3:
                arr.print();
                break;
            case 4:
                int k;
                cout << "Enter the Searched value :";
                cin >> k;
                if(arr.isPresent(k))
                    cout << "Present";
                else
                    cout << "Not Present";
                cout << endl;
                break;
            case 5:
                int x;
                cout << "Enter the value : ";
                cin >> x;

                if(arr.getValue(x))
                    cout << "Index of " << x << " is " << arr.getValue(x);
                else
                    cout << "value is not present";
                cout  << endl;
                break;
            case 6:
                exit(0);
            default:
                cout << "Please enter valid choice" << endl;
        }
    } while (choice != 5);
}

