// write a program to read N elements and store them in array then print all array elements and ask for a number for a number to check , then print how many number a certain element repeated in that array
// Input:5 
// Enter array elements: El [1]: 1 , El [2]: 1, El [3]: 1, El [4]:2, El [5]: 3
// Enter the number you want to check : 1
// output => Original array : 1 1 1 2 3
// 1 is repeated 3 time(s)
// first attempt


//My Method
// #include <iostream>
// #include <string>
// #include <ctime>
// #include <cstdlib>

// using namespace std;


// enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};


// int ReadPositionNumber (string Message) 
// {
//     int Number = 0;
//     do {
//         cout<<Message<<endl;
//         cin>>Number; 

//     }
//     while (Number <= 0);
    
//     return Number; 
//     }



// int   PrintElementForm (int Number)
// {   
//     int Num = 0;
//     cout << "Please Enter Array Elements: "<< endl;
    
//     for (int i = 1 ; i <= Number ; i++)
//     {
//         cout << "Element [ "<< i << " ] : ";
//         cin >> Num; 
//         //cout << endl;
//     }

//     return Num;
// }

// int EnterCheckNumber ()
// {
//     int NumberCheck = 0;
//     cout << " Enter the number you want to check : ";
//     cin >> NumberCheck;

// return NumberCheck;
// }

// int ToCheckNumber (int NumberCheck, int Number, int Num)
// {
//     int counter = 0;
//     for ( int i = 1 ; i < Number ; i ++ )
//     {
//         if (  NumberCheck == Num )
//         {
//             counter ++;
//         }
//     }
// return counter;
// }


// int main ()
// {
//     PrintElementForm(ReadPositionNumber("Please a Positive Number !"));

//     cout<< "Original Array " << PrintElementForm ;
//     cout<<EnterCheckNumber << "\n";
//     cout << ToCheckNumber << " is Repeated " << ToCheckNumber << " Time(s)";

//     return 0; 
// }

// Teacher Method
#include <iostream>
using namespace std;

int ReadPositiveNumber (string Message)
{
    int Number = 0;
    do 
    {
        cout<< Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void ReadArray(int arr[100], int &arrLength)
{
    cout<< " \n Enter number of element:\n";
    cin>>arrLength;

    cout<< "\n Enter array elements: \n";

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : "; 
        cin>> arr[i];
    }
    cout<< endl;
}


void PrintArray (int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength ; i++)
        cout << arr[i]<< " ";


    cout << "\n";
}

int TimesRepeated (int Number, int arr[100], int arrLength)
{
    int count = 0; 
    for (int i = 0 ; i <= arrLength - 1 ; i++)
    {
        if (Number == arr[i]) 
        {
            count++;
        }
    }
    return count; 
}

int main() {
    int arr[100];
    int arrlength;
    int NumberToCheck;

    ReadArray(arr, arrlength);

    NumberToCheck = ReadPositiveNumber ("Enter the number you want to check: ");


    cout << "\nOriginal array: ";
    PrintArray(arr, arrlength);

    cout<<"\nNumber "<< NumberToCheck;
    cout<<" is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrlength)<< " time(s)\n";

    return 0;
}