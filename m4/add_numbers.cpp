#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int add_numbers(int a, int b) {
    return a + b;
}

int main() {
    int a = 1;
    int b = 2;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "The sum of " << a << " and " << b << " is " << add_numbers(a, b) << endl;
}