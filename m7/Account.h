#include <string>
#include <vector>
#include "Transaction.h"

using std::string;
using std::vector;

class Account
{
private:    
    int balance;
    int const limit;
    vector<Transaction> log;

public:
    Account();
    Account(int deposit);
    Account(int deposit, int limit);
    vector<string> Report() const;
    bool Deposit(int amount);
    bool Withdraw(int amount);
    int GetBalance() const { return balance; }
};