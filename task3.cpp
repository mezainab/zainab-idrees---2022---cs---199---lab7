#include <iostream>
using namespace std;

int totalDigit(int digit);

main()
{
    int digit, number;
    cout << "Enter your digit: ";
    cin >> digit;

    number = totalDigit(digit);
    cout << number;
}
int totalDigit(int digit)
{
    int number = 0;
    while (digit > 0)
    {

        number = number + 1;
        digit = digit / 10;
    }
    return number;
}