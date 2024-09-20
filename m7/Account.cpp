#include "Account.h"
#include <iostream>
using std::cout;
using std::vector;
using std::string;
using std::to_string;

Account::Account(): balance(0)
{    
}

Account::Account(int money): balance(0), log({})
{    
    Deposit(money);
}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for (auto transaction : log)
    {
        report.push_back(transaction.Report());
    }
    report.push_back("------------");
    return report;
}

bool Account::Deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
        log.push_back(Transaction(amount, "Deposit"));
        return true;
    }
    return false;
}

bool Account::Withdraw(int amount)
{
    if (amount <0)
    {   
        cout << "Withdrawing " << to_string(amount) << " failed.";
        return false;
    }
    if (balance > amount)
    {
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw"));
        return true;
    }
    return false;
}

