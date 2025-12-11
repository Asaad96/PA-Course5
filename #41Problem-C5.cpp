// Write a program to fill array with numbers. then check if it is Palindrome array or Not
// Note: Palindrome can be read the same from right to left and from left to right
// Input :  10 20 30 30 20 10
// Output : Array Elements : 10 20 30 30 20 10
// Yes array is Palindrome


// // My Method
// #include <iostream>
// using namespace std;

// void FillArray(int arr[100], int &arrLength)
// {
//     arrLength = 6;

//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     arr[3] = 30;
//     arr[4] = 20;
//     arr[5] = 10;
// }

// int ReverseNumber(int arr[100], int arrLength)
// {
//     int Remainder = 0;
//     int Number2 = 0;
//     for (int i = 0; i < arrLength; i++)
//     {
//         while (arr[i] > 0)
//         {
//             Remainder = arr[i] % 10;
//             arr[i] = arr[i] / 10;
//             Number2 = Number2 * 10 + Remainder;
//         }
//     }

//     return Number2;
// }

// void IsPalindromeNumber(int arr[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//     {
//         if (arr[i] == ReverseNumber(arr, arrLength))
//         {
//             cout << "Is Palindrome Number \n";
//         }

//         else
//         {
//             cout << "Is NOT Palindrome Number \n";
//         }
//     }
// }

// void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DestinationLength)
// {
//     // Loop through each element in the source array.
//     for (int i = 0; i < SourceLength; i++)
//     {
//         // If the current element is not already in the destination array...
//         if (IsPalindromeNumber( arrDestination, DestinationLength))
//         {
//             // ...then add it to the destination array.
//             AddArrayElement( arrDestination, DestinationLength);
//         }
//     }
// }

// Teacher's Method
#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify standard library function calls.

// Function: FillArray
// Purpose: Initializes an array with a fixed set of values.
// Parameters:
//   - arr: An integer array (capacity 100) that will be filled with predefined numbers.
//   - arrLength: A reference variable that will hold the number of elements filled in the array.
void FillArray(int arr[100], int &arrLength)
{
    arrLength = 6;  // Set the number of elements in the array to 6.
    
    // Manually assign values to each element in the array.
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

// Function: PrintArray
// Purpose: Prints the elements of an array, separated by spaces.
// Parameters:
//   - arr: The array to be printed.
//   - arrLength: The number of elements in the array.
void PrintArray(int arr[100], int arrLength)
{
    // Loop through each element in the array and output it followed by a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  // Print a newline after printing all elements.
}

// Function: IsPalindromeArray
// Purpose: Checks whether the array is a palindrome.
//          An array is considered a palindrome if it reads the same forward and backward.
// Parameters:
//   - arr: The array to check.
//   - Length: The number of elements in the array.
// Returns: true if the array is a palindrome, false otherwise.
bool IsPalindromeArray(int arr[100], int Length)
{
    // Loop through each element of the array.
    // We only need to check up to the middle of the array.
    for (int i = 0; i < Length; i++)
    {
        // Compare the element at position i with its corresponding element from the end.
        if (arr[i] != arr[Length - i - 1])
        {
            return false;  // If any pair doesn't match, the array is not a palindrome.
        }
    }
    
    // If all corresponding pairs match, the array is a palindrome.
    return true;
}

// Main function: Entry point of the program.
int main()
{
    int arr[100];  // Declare an array with capacity for 100 integers.
    int Length = 0; // Initialize the length of the array.
    
    // Fill the array with predefined values.
    FillArray(arr, Length);
    
    // Print the array elements.
    cout << "\nArray Elements:\n";
    PrintArray(arr, Length);
    
    // Check if the array is a palindrome and display the result.
    if (IsPalindromeArray(arr, Length))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNO array is NOT Palindrome\n";
    
    return 0;  // Return 0 to indicate successful program execution.
}


