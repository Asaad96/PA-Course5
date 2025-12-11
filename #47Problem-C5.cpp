// Write a program to print round of numbers, don't use built in round function

#include <iostream>
#include <math.h>

using namespace std;

float ReadNumber()
{
    float Number = 0;

    cout << "Please Enter a Number " << endl;

    cin >> Number;

    return Number;
}

float MyABS(float Number)
{

    if (Number < 0)
    {
        return -1 * (Number);
    }
    else

        return Number;
}

float AfterDecimalPoint(float &Number)
{

    return Number - int(Number);
}

float MyRound (float Number)
{
    int IntPart;
    IntPart = int(Number);


    float FractionsPart = AfterDecimalPoint(Number);


    if (MyABS(FractionsPart) >= 0.5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }

    else 
    {
        return IntPart;
    }
}



int main()
{
    float Number = ReadNumber();

    cout << "My Round Result " << MyRound(Number) << endl;

    return 0;
}