#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double bal)
    {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount)  {
        if(amount <= 0)
        {
            cout << "Invalid withdrawal amount" << endl;
        }
        else if(amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(101, 5000);

    account.deposit(2000);
    account.withdraw(1500);

    account.display();

    return 0;
}
