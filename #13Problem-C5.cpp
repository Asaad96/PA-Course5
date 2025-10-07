// Write a program to read a number and print inverted pattern as follow!
// input 3 -> output 1 22 333
// input 5 -> output 1 22 333 4444 55555

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

void PrintInvertedNumberPattern(int Number)
{

    while (Number != 0)
    {
        int Number2 = 0;
        for (int j = Number2; j >= 1; j++)
        {
            for (int i = 1; i <= Number; i++)

            {

                cout << Number;

                if (i == Number)
                    break;
            }
            Number2 = Number;
        }
        cout << "\n";
        Number = Number - 1;
    }
}

// for (int i = 1; i <= Number ;i++)
//     {
//         // Inner loop: Prints the current number 'i' repeatedly.
//         // It runs from 1 up to the current value of 'i'.
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;  // Print the digit 'i' without a space.
//         }

//         cout << "\n";  // After printing one line, move to the next line.
//     }
// }

// Main function: Program entry point.
int main()
{
    // Read a positive number from the user and pass it to the PrintInvertedNumberPattern function.
    PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0; // Return 0 to indicate successful execution.
}