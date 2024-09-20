#include <iostream>
using std::cout;

#include "Account.h"

int main()
{
    Account a1;
    a1.Deposit(90);
    cout << "After depositing $90, balance is  " << a1.GetBalance() << '\n';
    for (auto report : a1.Report())
    {
        cout << report << '\n';
    }

    a1.Withdraw(50);
    if (a1.Withdraw(100))
    {
        cout << "Second withdraw succeeds " << '\n';
    }

    cout << "After withdrawing $50 and then $100" << '\n';
    for (auto report : a1.Report())
    {
        cout << report << '\n';
    }

    Account a2(100);
    a2.Report();
    cout << "After depositing $100, balance is  " << a2.GetBalance() << '\n';
    a2.Deposit(10);
    cout << "After depositing $10, balance is  " << a2.GetBalance() << '\n';
    a2.Withdraw(200);
    cout << "After withdrawint $200, balance is  " << a2.GetBalance() << '\n';
    a2.Withdraw(30);
    cout << "After withdrawint $200, balance is  " << a2.GetBalance() << '\n';
    for (auto report: a2.Report())
    {
        cout << report << '\n';
    }
}