#include <iostream>
using namespace std;

void calculatePrice(float money, int year);
main()
{
    float money;
    int year;
    cout << "Enter amount of money inherited: ";
    cin >> money;
    cout << "Enter the year: ";
    cin >> year;

    calculatePrice(money, year);
}
void calculatePrice(float money, int year)
{
    int age = 18;
    float amountSpent = 0, amountleft = 0, amountRequired = 0;
    for (int x = 1800; x <= year; x = x + 3)
    {
        age = age + 1;
        amountSpent = amountSpent + (12000 + 50 * age);
    }
    for (int x = 1800; x <= year; x = x + 2)
    {
        amountSpent = amountSpent + 12000;
    }
    amountRequired = amountSpent - money;
    amountleft = money - amountSpent;
    if (money > amountSpent)
    {
        cout << "Yes! He will live a carefree life." << amountleft << "$"
             << " are Left";
    }
    if (money < amountSpent)
    {
        cout << "Nooo! He will need" << amountRequired << "$" << " to live";
    }
}