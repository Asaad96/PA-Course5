// Write a program to fill array with max size 100 with random numbers from 1 to 100
// copy it to another array in reverse order and print it

#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


int OrderNumber (int From, int To)
{
    
    for (int From = 0 ; From <= To ; From++ ) 
        From++;
    
return From;
}




void FillArrayWithRandomNumbers (int arr[100], int &arrLength )
{
    cout<<"\n Enter number of Elements:\n";
    cin>>arrLength;

    for (int i = 0 ; i < arrLength; i++)
        arr[i] = RandomNumber(1,100);
}

void PrintArray (int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength ; i++ )
    cout<< arr[i] << " ";

    cout << "\n";

}




void CopyOfArray (int arrSource[100], int arrDestination[100], int arrLength) 
{
    

    for ( int i = 0; i < arrLength ; i++)
    
        arrDestination[i] = arrSource[arrLength - 1 - i]; 
}

int main() {

srand((unsigned) time(NULL));

int arr[100];
int arrLength;


FillArrayWithRandomNumbers(arr,arrLength);

int arr2[100];

CopyOfArray(arr, arr2, arrLength);

cout << "\n The First Array Elements: ";
PrintArray(arr, arrLength);

cout << " The Second Array Elements : ";
PrintArray(arr2, arrLength);


return 0;
}


