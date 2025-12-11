// write a program to dynamically read numbers and save them in an array Max size of array is 100
// allocate semi-dynamic array length

// output 
// Please enter a number? 10 
// Do you want to add more Numbers? [0]No , [1]Yes? 1
// Please enter a number? 20 
// Do you want to add more Numbers ?[0]No , [1]Yes? 1
// Please enter a number? 30
// Do you want to add more Numbers ?[0]No , [1]Yes? 0

// Array Length: 3 
// Array element: 10 20 30

#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout  << "\n Please enter a number? \n";
    cin >> Number;
    return Number;
}

void AddArrayElement(int Number, int arr[100], int &arrLength )
{
    arrLength++ ;

    arr[arrLength -1] = Number;

}

void InputUserNumbersInArray(int arr[100], int &arrLength)
{
    bool AddMore = true ; 

    do {

        AddArrayElement(ReadNumber(), arr, arrLength);

        cout << "\n Do you want to add more numbers? [0]No, [1]Yes ? ";
        cin>> AddMore;
    } while(AddMore);
}

void FillinArray (int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength ; i++)
    {
        ReadNumber();        
    }
}

void PrintArray(int arr[100], int arrLength)
{
    // Loop through each element of the array and print it.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  // Print a newline after printing all elements.
}





int main()
{
int arr[100];
int arrLength = 0;

InputUserNumbersInArray(arr, arrLength);

cout << "\nArray Length: "<< arrLength<<endl;
cout << "Array elements: ";
PrintArray(arr, arrLength);


return 0;

}