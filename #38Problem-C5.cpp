// Write a program to fill array with max size 100 with random numbers
//from 1 to 100, copy only odd numbers to another array using AddArrayElement
//and print it



#include <iostream>
using namespace std;






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


void CopyOddNumbers (int arrSource[100], int arrDestination[100], int arrLength ,int  &arrDestinationLength) 
{
    
    
    for ( int i = 0; i < arrLength ; i++)
        {if(arrSource[i] % 2 != 0 ){
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

CopyOddNumbers(arr, arr2, arrLength,arr2Length);

cout << "\n The First Array Elements: ";
PrintArray(arr, arrLength);

cout << " Odd Array's Elements : ";
PrintArray(arr2, arr2Length);


return 0;
}
