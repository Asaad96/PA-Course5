// write a program to fill array with max size 100 with random numbers from 1 to 100, then print average of all number
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

float ArrayAverage(int arr[100], int arrLength)
{
    return (float) SumElement(arr, arrLength) / arrLength;
}



int main() {

srand((unsigned) time(NULL));

int arr[100];
int arrLength;


FillArrayWithRandomNumbers(arr,arrLength);

cout << "\n Array Elements: ";
PrintArray(arr, arrLength);

cout << " Average is: ";
cout << ArrayAverage(arr, arrLength)<< endl;


return 0;
}

