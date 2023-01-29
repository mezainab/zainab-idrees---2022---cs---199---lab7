#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
    int number1, number2, gcd, lcm;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    gcd = calculateGCD(number1, number2);
    lcm = calculateLCM(number1, number2, gcd);

    cout<< gcd;
    cout << lcm;
}
int calculateGCD(int number1, int number2)
{
    int gcd = 0;

    for (int count = 0; count <= number1; count = count + 1)
    {
        if (number1 % count == 0 && number2 % count == 0)
        {
            gcd = count;
        }
    }
    return gcd;
}
int calculateLCM(int number1, int number2, int gcd)
{
    int lcm = 0;
    for (int count = 0; count <= number1; count = count + 1)
    {
        lcm = (number1 * number2) / gcd;
    }
    return lcm;
}

