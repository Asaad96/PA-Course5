// write a program to fill array with max size 100 with random numbers from 1 to 100, then print sum of all of the numbers
// input: 10
// output: Array Element: 56 55 83 71 32 52 17 28 52
// Sum is : ()

// My Method

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

void PrintArray (int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength ; i++ )
    cout<< arr[i] << " ";

    cout << "\n";

}

int SumElement (int arr[100], int arrLength)
{
    int sum = 0; 
    for (int i = 0 ; i < arrLength ; i ++)
    {
        sum = sum + arr[i];
    }

return sum;
}

int main() {

srand((unsigned) time(NULL));

int arr[100];
int arrLength;


FillArrayWithRandomNumbers(arr,arrLength);

cout << "\n Array Elements: ";
PrintArray(arr, arrLength);

cout << " Sum is: ";
cout << SumElement(arr, arrLength)<< endl;


return 0;
}

