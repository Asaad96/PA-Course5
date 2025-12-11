// Write a program to print Ceil of numbers, don't use built in Ceil Function



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

float MyCeil(float Number)
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

float Myfloor (float Number)
{
    int IntPart;
    IntPart = int(Number);


    //float FractionsPart = AfterDecimalPoint(Number);


    
        if (Number > 0)
            return ++IntPart;
        else
            return IntPart;
    

    
}



int main()
{
    float Number = ReadNumber();

    cout << "My Ceil Result " << Myfloor(Number) << endl;

    return 0;
}