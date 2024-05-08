// Write a C++ program to demonstrate ATM money withdrawal and deposit process by taking
// following private data members:
// Accountno, balance;
// Account no and balance data member initialize using parameterized constructor
// Write three function 1. Deposit 2. Withdraw 3. Balance
// Write menu driven choice
// 1. Deposit
// 2. Withdraw
// 3. Balance
// 4. Exit
// Program stop execution when user enter choice

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    double balance;

public:
    BankAccount(int no, double bal)
    {
        this->accountNo = no;
        this->balance = bal;
    }

    void setdeposit(double amount)
    {
        this->balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    void displayBalance()
    {
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(1234, 1000.0);

    int choice;
    do
    {
        cout << "MAIN MENU" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double depositAmount;
            cout << "Enter amount to deposit: ";
            cin >> depositAmount;
            account.setdeposit(depositAmount);
            break;
        }
        case 2:
        {
            double withdrawAmount;
            cout << "Enter amount to withdraw: ";
            cin >> withdrawAmount;
            account.withdraw(withdrawAmount);
            break;
        }
        case 3:
            account.displayBalance();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}