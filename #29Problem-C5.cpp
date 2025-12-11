// write a program to fill array with max size 100 with random numbers from 1 to 100,
// copy only prime numbers to another array and print it

#include <iostream>
using namespace std;

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\n Enter number of Elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

enPrimeNotPrime CheckPrime(int Number)
{

    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime ::NotPrime;
    }

    return enPrimeNotPrime ::Prime;
}

void CopyOfArray(int arrSource[100], int arrDestination[100], int arrLength, int &arr2Lenght)
{

int Counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if(CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
        {
        arrDestination[Counter] = arrSource[i];
        Counter++;
        }

    }

    arr2Lenght = --Counter;
}

// int PrimeNumberArray(int arrSource[100],int arrDestination[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)

//     {
//         if (CheckPrime(arrDestination[i]) == enPrimeNotPrime::Prime)
            

//         cout << arrDestination[i];
//     }
// }

int main()
{

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    int arr2Lenght = 0;

    CopyOfArray(arr, arr2, arrLength, arr2Lenght);

    cout << "\n The First Array Elements: ";
    PrintArray(arr, arrLength);

    cout << " Prime Numbers in The Second Array are : ";
    PrintArray(arr2, arr2Lenght);

    return 0;
}
