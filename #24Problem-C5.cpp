// write a program to fill array with max size 100 with random numbers from 1 to 100, then print Max
// input: 10
// output: Array Element: 56 55 83 71 32 52 17 28 52
// Max is : 83

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

int MaxElement (int arr[100], int arrLength)
{
    int Max = 0; 
    for (int i = 0 ; i < arrLength ; i ++)
    {
        if(arr[i] > Max)
        Max = arr[i];
    }

return Max;
}

int main() {

srand((unsigned) time(NULL));

int arr[100];
int arrLength;


FillArrayWithRandomNumbers(arr,arrLength);

cout << "\n Array Elements: ";
PrintArray(arr, arrLength);

cout << " Max is: ";
cout << MaxElement(arr, arrLength)<< endl;


return 0;
}

