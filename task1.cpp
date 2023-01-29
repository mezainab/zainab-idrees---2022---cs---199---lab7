#include <iostream>
using namespace std;

void multiple(int number);
main()
{
    int number;

    cout << "Enter the number: ";
    cin >> number;
    multiple(number);
}
void multiple(int number)
{
    for (int count = 1; count <= 10; count = count + 1)
    {
        cout << number << " * " << count << " = " << number * count << endl;
    }
}
