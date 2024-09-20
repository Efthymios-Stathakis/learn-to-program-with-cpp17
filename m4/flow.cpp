#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int first_number;
    int second_number;
    bool keep_going = true;
    int answer = 0;

    while (keep_going) 
    {
        cout << "Enter a number:  ";
        cin >> first_number;
        cout << "Your entered " << first_number << ". \nEnter another number:  ";
        cin >> second_number;


        if (first_number > second_number) {
            cout << "The first number is greater than the second number" << '\n';
        } else if (first_number < second_number) {
            cout << "The first number is less than the second number" << '\n';
        } else {
            cout << "The first number is equal to the second number" << '\n';
        }   

        cout << "Do you want to keep going? (y/n) 0 means no, 1 means yes: ";
        cin >> answer;
        if (answer == 0) {
            keep_going = false;
        }   
    }
}