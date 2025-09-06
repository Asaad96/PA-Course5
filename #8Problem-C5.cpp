// Write a program read a digit and a number, then print digit frequency in that number

#include<iostream>


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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int Remainder = 0;  
    int frequency = 0;
    
    while (Number > 0)
    {
        Remainder = Number % 10;   
        Number = Number / 10;  
        if (DigitToCheck == Remainder) {
            frequency ++ ;
        }    
        
    }
    
    return frequency; 
}

// void PrintAllDigitsFrequency(int Number)
// {

//     cout<< endl;
//     for (int i = 0; i< 10; i++)
//     {
//         short DigitFrequency = 0;
//     }

// }

int main ()
{
    int Number = ReadPositiveNumber("Please enter the main number! ");

    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check! ");

    cout << "\nDigit "<< DigitToCheck << " Frequency is "
        << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";


    return 0;
}