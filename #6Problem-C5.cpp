// #6Problem write a program to read a number and print the sum of its digits.
// input : 1234 
// output : sum of Digits = 10


#include <iostream>
#include<string.h>

using namespace std;

int ReadPositiveNumber (string Message)
{
    int Number = 0;

    do {
        cout<<Message<<endl;
        cin>> Number;
        
    }
    while (Number <= 0);
    
    return Number;
}  

void PrintDigitNumber (int Number)
{
    int remainder = 0 ;
    int Sum = 0;

    while (Number > 0)
    {
        remainder = Number % 10;
        Sum = Sum + remainder ;
        Number = Number / 10;
        
    }
    cout<<"Sum of Digits = "<<Sum<<endl;
}

int main ()
{
    PrintDigitNumber(ReadPositiveNumber("Please enter a Positive Number! "));
    return 0;
}