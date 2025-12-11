// write a program to fill array two arrays with max size 100 with random numbers from 1 to 100
// sum their elements in a third array and print the results

#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100],int arr2[100], int &arrLength)
{
    cout << "\n Enter number of Elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);

     for (int j = 0; j < arrLength; j++)
        arr2[j] = RandomNumber(1, 100);

}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}


void SumofArraies(int arrSource[100], int arrDestination[100],int arr3[100] ,int arrLength )
{

   


    for (int i = 0; i < arrLength; i++)
    
      arr3[i] =  arrSource[i] + arrDestination[i];
    

    


}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100];
    int arr2[100];
    int arr3[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr,arr2 ,arrLength);

   

    //FillArrayWithRandomNumbers(arr2, arrLength);


    SumofArraies (arr, arr2,arr3 ,arrLength );

    cout << "\n The First Array Elements: ";
    PrintArray(arr, arrLength);

    cout << " The Second Array are : ";
    PrintArray(arr2, arrLength );

    cout << " The Sum of Array's are : ";
    PrintArray(arr3, arrLength );

    return 0;
}
