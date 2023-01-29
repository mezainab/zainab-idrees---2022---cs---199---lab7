#include <iostream>
using namespace std;

int total(int number);
main()
{
    int number, sum;
    cout << "Enter Your number: ";
    cin >>number;

    sum = total(number);
    cout << sum;
}
int total(int number)
{
int sum = 0;
int x = 0;
int digit;

    while(number != 0)
    {
        x = x + 1;
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    return sum;
}