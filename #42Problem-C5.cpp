// write a program to fill array with Max size 100 with random numbers from 1 to 100 
// then print the count of Odd numbers

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


void PrintOrginalArray (int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength ; i++ )
    cout<< arr[i] << " ";

    cout << "\n";

}


void PrintArray (int arr[100], int arrLength)
{

    int count = 0 ;
    
    for (int i = 0; i < arrLength ; i++ )
    { if(arr[i] % 2 != 0)
    
    count ++; }
    cout<< "Odd Numbers count is : " << count << endl;

}

int main() {

srand((unsigned) time(NULL));

int arr[100];
int arrLength = 0;


FillArrayWithRandomNumbers(arr,arrLength);


//CopyOddNumbers(arr, arr2, arrLength,arr2Length);

cout << "\n The First Array Elements: ";
PrintOrginalArray(arr, arrLength);

cout << " Odd Array's Elements : ";
PrintArray(arr, arrLength);


return 0;
}
