#include <iostream>
using namespace std;

void printFibonacci(int number);
main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    printFibonacci(number);
}
void printFibonacci(int number)
{
    int next = 0;
    int num1 = 0;
    int num2 = 1;
    for (int count = 1; count <= number; count = count + 1)
    {

        cout << next << endl;
        num1 = num2;
        num2 = next;
        next = num1 + num2;
    }
}