// Write a program to fill array with numbers, then print
// distinct numbers to another array

// output :
// Array 1 elements:
// 10 10 10 50 50 70 70 70 70 90
// Array 2 distinct elements:
// 10 50 70 90



// My Method 
// #include <iostream>
// using namespace std;

// void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
// {
//     // cout<<"\n Enter number of Elements:\n";
//     // cin>>arrLength;

//     for (int i = 0; i < 10; i++)
//     {
//         switch (i)
//         {
//         case 0:
//         case 1:
//         case 2:
//             arr[i] = 10;
//             break;

//         case 3:
//         case 4:
//             arr[i] = 50;
//             break;

//         case 5:
//         case 6:
//         case 7:
//         case 8:
//             arr[i] = 70;
//             break;

//         case 9:
//             arr[i] = 90;
//             break;
//         }
//     }
// }

// int AddArrayElement(int Number, int arr[100], int &arrLength)
// {
//     arrLength++;

//     arr[arrLength - 1] = Number;
//     return 0;
// }

// void PrintArray(int arr[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//         cout << arr[i] << " ";

//     cout << "\n";
// }

// void CopyDistinctElements(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
// {

//     for (int i = 0; i < arrLength; i++)
//     {
//         bool exist = false;

//         for (int j = 0; j < arrDestinationLength; j++)
//         {
//             if (arrSource[i] == arrDestination[j])
//             {
//                 exist = true;
//                 break;
//             }
//         }

//         if (!exist)
//             AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
//     }
// }


// int main()
// {

//     srand((unsigned)time(NULL));

//     int arr[100];
//     int arrLength = 10;

//     FillArrayWithRandomNumbers(arr, arrLength);

//     int arr2[100];
//     int arr2Length = 0;

//     CopyDistinctElements(arr, arr2, arrLength, arr2Length);

//     cout << "\n The First Array Elements: ";
//     PrintArray(arr, arrLength);

//     cout << " Distinct Array's Elements : ";
//     PrintArray(arr2, arr2Length);

//     return 0;
// }


#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to common functions.

// Function: FillArray
// Purpose: Initializes the source array with predefined numbers, some of which are duplicates.
// Parameters:
//   - arr: The source array to be filled (with capacity of 100).
//   - arrLength: A reference variable to store the number of elements filled in the array.
void FillArray(int arr[100], int &arrLength)
{
    arrLength = 10;  // Set the array length to 10 elements.
    
    // Manually assign values to the array elements.
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

// Function: PrintArray
// Purpose: Prints the elements of an integer array, separated by spaces.
// Parameters:
//   - arr: The array to be printed.
//   - arrLength: The number of elements in the array.
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";  // Print each element followed by a space.
    cout << "\n";  // Move to the next line after printing the array.
}

// Function: FindNumberPositionInArray
// Purpose: Searches for a given number in an array and returns its index if found.
// Parameters:
//   - Number: The number to search for.
//   - arr: The array in which to search.
//   - arrLength: The number of elements in the array.
// Returns: The index of the number if found; otherwise, returns -1.
short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;  // Return the index as soon as the number is found.
    }
    // If the number is not found, return -1.
    return -1;
}

// Function: IsNumberInArray
// Purpose: Determines if a given number exists in an array.
// Parameters:
//   - Number: The number to search for.
//   - arr: The array in which to search.
//   - arrLength: The number of elements in the array.
// Returns: true if the number is found; false otherwise.
bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

// Function: AddArrayElement
// Purpose: Adds a new element to the end of an array and updates its length.
// Parameters:
//   - Number: The number to add.
//   - arr: The array to which the number will be added.
//   - arrLength: A reference variable representing the current number of elements in the array.
// Behavior: Increments arrLength and places the new element at the last index.
void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    arrLength++;             // Increase the array length by 1.
    arr[arrLength - 1] = Number;  // Place the new element at the new last index.
}

// Function: CopyDistinctNumbersToArray
// Purpose: Copies only distinct (non-duplicate) numbers from the source array to the destination array.
// Parameters:
//   - arrSource: The source array from which numbers will be copied.
//   - arrDestination: The destination array where distinct numbers will be stored.
//   - SourceLength: The number of elements in the source array.
//   - DestinationLength: A reference variable that tracks the number of elements in the destination array.
void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DestinationLength)
{
    // Loop through each element in the source array.
    for (int i = 0; i < SourceLength; i++)
    {
        // If the current element is not already in the destination array...
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            // ...then add it to the destination array.
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}

// Main function: Program entry point.
int main()
{
    int arrSource[100], SourceLength = 0;       //