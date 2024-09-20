#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
    string phrase1;
    string phrase2;

    // cout << "Input word 1" << '\n';
    // cin >> word1;
    // cout << "Input word 2" << '\n';
    // cin >> word2;
    cout << "Enter a phrase: ";
    getline(cin, phrase1);

    cout << "Enter another phrase: ";
    getline(cin, phrase2);

    if (phrase1.length() > phrase2.length())
    {
        cout << phrase1 << " is longer than " << phrase2;
    }
    else if (phrase1.length() < phrase2.length())
    {
        cout << phrase1 << " is shorter than " << phrase2;
    }
    else
    {
        cout << phrase1 << " is equally long as  " << phrase2;
    }
}