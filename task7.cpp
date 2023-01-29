#include <iostream>
using namespace std;

void printPercentage (int number);
main()
{

    int number;
    cout<<"Enter your number: ";
    cin>>number; 

    printPercentage (number);

}
void printPercentage (int number)
{
        float firstRange =0;
        float secondRange =0;
        float thirdRange =0;
        float fourthRange =0;
        float fifthRange =0;

    int num;
    for(int x = 1; x <= number ; x = x + 1 )
    {
    
        cout<<"Enter a number: ";
        cin >> num;
        if(num >= 1 && num < 200)
        {
        firstRange = firstRange + 1;
        }
        else if(num >= 200 && num <= 399)
        {
        secondRange = secondRange + 1;
        }
        else if (num >= 400 && num <= 599)
        {
        thirdRange = thirdRange + 1;
        }
        else if (num >= 600 && num <= 799)
        {
        fourthRange = fourthRange + 1;
        }
        else if (num > 800)
        {
        fifthRange = fifthRange + 1;
        }
    }
        float percentage1;
        float percentage2;
        float percentage3;
        float percentage4;
        float percentage5;


        percentage1 = (firstRange / number )* 100;
        percentage2 = (secondRange / number) * 100;
        percentage3 = (thirdRange / number ) * 100;
        percentage4 = (fourthRange / number ) * 100;
        percentage5 = (fifthRange / number ) * 100;


    cout << percentage1 << "%" <<endl;
    cout << percentage2 << "%" <<endl;
    cout << percentage3 << "%" <<endl;
    cout << percentage4 << "%" <<endl;
    cout << percentage5 << "%" <<endl;
}
