#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int val1;
    int answer = 7;
    bool match = false;
    
    while (not match) {

        cout << "Guess my number: ";
        cin >> val1;
        if (val1 == answer) {
            cout << "You guessed it!" << '\n';
            match = true;
        } else if (val1 < answer) {
            cout << "Too low!" << '\n';
        } else {
            cout << "Too high!" << '\n';
        }
    
    }
}