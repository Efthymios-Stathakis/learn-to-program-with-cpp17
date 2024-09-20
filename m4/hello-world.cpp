#include <iostream>
using namespace std;
using std::cout;
using std::cin;

int main()
{
    cout << "hello world" << '\n';
    cout << 34 << '\n';

    cout << '\n' << '\n';
    int i = 3+2;
    cout << i << '\n';
    i *= 3;
    cout << i << '\n';

    cout << "Enter a number: ";
    cin >> i;
    cout << "You entered: " << i*2 << '\n';
    return 0;
}