// Write a C++ program to demonstrate ATM money withdrawal process by taking following private data members:
// Accountno, balance;
// The withdrawal function should return remaining balance to the user and should deduct withdrawal amount
// from balance. If withdrawal amount > balance print appropriate message on screen (Not enough balance)
// The Deposit function should return updated balance to user.

#include <iostream>
using namespace std;

class Account
{
private:
    int accountno;
    int balance = 0;

public:
    void setAccountNumber(int AccountNo)
    {
        this->accountno = accountno;
    }

    void setBalance(int balance)
    {
        this->balance = balance;
    }

    void withdrawal(int x)
    {
        if (x > balance)
        {
            cout << "Insufficant Balance " << endl;
        }
        else
        {
            balance = balance - x;
            cout << balance << endl;
        }
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Account a1, a2;
    a1.setAccountNumber(83033);
    a1.setBalance(10000);
    cout << a1.getBalance() << endl;
    a1.withdrawal(50000);
    return 0;
}