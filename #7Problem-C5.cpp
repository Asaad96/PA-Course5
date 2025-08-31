// Write a program to read a number and print it reversed 


#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int ReadPositiveNumber ( string Message) {
  

    int Number = 0;
    do {
        cout<< Message << endl;
        cin>>Number;
    }
    while (Number <= 0);
    return Number;
}
// my method
void PrintReverseNumber (int Number)
{
int remainder, reverse = 0 ;

cout<<"reverse is ";
while (Number > 0)

{
    remainder = Number % 10;
    
    Number = Number / 10;
    reverse = remainder;
    cout<<reverse;
}
 cout << endl;

}


// Teacher's method

//int ReverseNumber(int Number)
{
    int Remainder = 0;  // Variable to store the last digit extracted from the number.
    int Number2 = 0;    // Variable to accumulate the reversed number.
    
    // Loop until there are no more digits left in Number.
    while (Number > 0)
    {
        Remainder = Number % 10;   // Extract the last digit of Number.
        Number = Number / 10;      // Remove the last digit from Number.
        Number2 = Number2 * 10 + Remainder;  // Append the digit to Number2 by shifting left and adding Remainder.
    }
    
    return Number2;  // Return the reversed number.
}

int main ()
{
    PrintReverseNumber(ReadPositiveNumber("Enter a positive Number!"));
    return 0;
}