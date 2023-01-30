#include <iostream>
using namespace std;

float calculateMoney(int age, float priceToy, float priceWashingMachine);
main()
{
    float age, priceToy, priceWashingMachine;
    float result = 0;
    cout << "Enter Lily's age: ";
    cin >> age;
    cout << "Enter Price of Washing Machine: ";
    cin >> priceWashingMachine;
    cout << "Enter Price of each toy: ";
    cin >> priceToy;

    result = calculateMoney(age, priceToy, priceWashingMachine);
}
float calculateMoney(int age, float priceToy, float priceWashingMachine)
{
    float result = 0;
    float moneySavedEvenBday = 0, moneySavedOddBday = 0, totalmoneySaved = 0, remaining = 0, required = 0;
    for (int x = 2; x <= age; x = x + 2)
    {
        moneySavedEvenBday = moneySavedEvenBday + x * 5;
        moneySavedEvenBday = moneySavedEvenBday - 1;
    }
    for (int x = 1; x <= age; x = x + 2)
    {
        moneySavedOddBday = moneySavedOddBday + priceToy;
    }
    totalmoneySaved = moneySavedEvenBday + moneySavedOddBday;
    remaining = totalmoneySaved - priceWashingMachine;
    required = priceWashingMachine - totalmoneySaved;
    if (totalmoneySaved > priceWashingMachine)
    {
        cout << "Yes! Remaining amount left: " << remaining;
    }
    else if (totalmoneySaved < priceWashingMachine)
    {
        cout << "No! Required amount is: " << required;
    }
    return result;
}