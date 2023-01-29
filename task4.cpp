#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit);
main ()
{
int number, digit;
int frequency;

cout << "Enter the number: ";
cin>>number;
cout<< "Enter the digit: ";
cin>> digit;

frequency = frequencyChecker(number, digit);
cout << frequency;
}
int frequencyChecker(int number, int digit)
{
    float count = 2;
    int num = 0;
while( count > 0 )
{
count = number % 10;
if( count == digit )
{
num = num + 1;
}
number = number/ 10;
}
return num;
}