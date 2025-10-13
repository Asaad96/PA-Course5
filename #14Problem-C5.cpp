// write a program to read a number and print inverted letter pattern as follow
// input 3 -> output CCC BB A
// input 5 -> output EEEEE DDDD CCC BB A

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

void PrintInvertedLetter(int Number) {
cout << endl;



for ( int i = Number; i >= 1; i --)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            cout << char(64+i);
        }
        cout << "\n";
    }
}



int main() {

    PrintInvertedLetter(ReadPositiveNumber("Please Enter a Positive Number !\n"));    
    return 0 ; 
}