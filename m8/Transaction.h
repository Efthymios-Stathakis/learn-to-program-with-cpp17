#include <string>
using std::string;

class Transaction
{
private:
    int amount;
    string type;

public:
    Transaction(int amt, string kind);
    string Report() const;
    void DoubleAmount() {amount *=2;};
};