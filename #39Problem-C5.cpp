//Write a program to fill array with Max size 100 with random 
// Numbers from 1 to 100, copy only prime numbers to another array 
// using AddArrayElement, and print it.



#include <iostream>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
    // Calculate half of the number. 
    // The use of round() here ensures we work with an approximate half even though integer division could be used.
    int M = round(Number / 2);
    
    // Loop from 2 to M to check if any number divides Number evenly.
    for (int Counter = 2; Counter <= M; Counter++)
    {
        // If Number is divisible by Counter (remainder is 0), then it is not prime.
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;  // Return NotPrime if a divisor is found.
    }
    
    // If no divisors were found, the number is prime.
    return enPrimNotPrime::Prime;
}





int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers (int arr[100], int &arrLength )
{
    cout<<"\n Enter number of Elements:\n";
    cin>>arrLength;

    for (int i = 0 ; i < arrLength; i++)
        arr[i] = RandomNumber(1,100);
}

int AddArrayElement(int Number, int arr[100], int &arrLength )
{
    arrLength++ ;

    arr[arrLength -1] = Number;
return 0;
}



void PrintArray (int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength ; i++ )
    cout<< arr[i] << " ";

    cout << "\n";

}


void CopyPrimeNumbers (int arrSource[100], int arrDestination[100], int arrLength ,int  &arrDestinationLength) 
{
    
    
    for ( int i = 0; i < arrLength ; i++)
        {if(CheckPrime(arrSource[i]) == enPrimNotPrime::Prime) {
        AddArrayElement( arrSource[i], arrDestination, arrDestinationLength);
        }}
}



int main() {

srand((unsigned) time(NULL));

int arr[100];
int arrLength = 0;


FillArrayWithRandomNumbers(arr,arrLength);

int arr2[100];
int arr2Length = 0;

CopyPrimeNumbers(arr, arr2, arrLength,arr2Length);

cout << "\n The First Array Elements: ";
PrintArray(arr, arrLength);

cout << " Prime Array's Elements : ";
PrintArray(arr2, arr2Length);


return 0;
}
