// // write a program to guess a 3-letter password (all capital)
// // input: AAF
// // output : Trail[1]: AAA , Trail [2]: AAB , ...., Trail [6]: AAF
// // password is AAF
// // Found after 6 Trail(s)

// #include <iostream>
// #include <string>
// using namespace std;

// string Inputletters (const string &message)
// {
//     string pass;
//     cout<< message;
//     cin>> pass;
//     cout<< endl;
//     return pass;
// }

// bool CheckPass (const string &word, const string &pass, int count)
// {
//     if (word == pass)
//     {
//         cout << " Password is "<< word << "\n";
//         cout << " Found after "<< count << "Trail(s)"<< endl;

//     }
//     else 
//     {
//         cout << "Trail["<< count << "]: "<< word << endl;
//         return false;
//     }
// }



// int PrintAllFromAAAtoZZZ(const string &pass)
// {
//     cout << "\n";  // Print an empty line for formatting.
//     string word = "";  // Initialize an empty string to build each three-letter combination.
//     int count = 0;
    
//     // Outer loop: Iterates over ASCII values for uppercase letters (65 'A' to 90 'Z') for the first letter.
//     for (int i = 65; i <= 90; i++)
//     {
//         // Middle loop: Iterates over ASCII values for uppercase letters for the second letter.
//         for (int j = 65; j <= 90; j++)
//         {
//             // Inner loop: Iterates over ASCII values for uppercase letters for the third letter.
//             for (int k = 65; k <= 90; k++)
//             {   word.clear();
//                 word.append(1, char(i));
//                 word.append(1, char(j));
//                 word.append(1, char(k));

//                 count = count + 1;
//                 cout << word << endl;
                

//                 if (CheckPass(word, pass, count))
//                 {
//                     return count;
//                 }
//             }
//         }
        
//         cout << "\n____________________________\n";
//     }

//     return 0;
// }





// int main ()
// {
//     string pass = Inputletters("Please enter your Password Capital letters \n");
//     int foundAfter = PrintAllFromAAAtoZZZ(pass);

//     if (foundAfter == 0)
//         cout<< "Password not found \n";

// return 0;
// }


#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.
using namespace std;  // Use the standard namespace to simplify standard library calls.

// Function: ReadPassword
// Purpose: Prompts the user to enter a 3-letter password (all uppercase letters).
// Returns: The password entered by the user as a string.
string ReadPassword()
{
    string Password;  // Variable to store the user's password.
    
    cout << "Please enter a 3-Letter Password (all capital)?\n"; // Prompt the user.
    cin >> Password;  // Read the password input.
    
    return Password;  // Return the password.
}

// Function: GuessPassword
// Purpose: Attempts to guess the original 3-letter password by brute-forcing through all 
//          combinations of three uppercase letters (from "AAA" to "ZZZ").
// Parameters: 
//      OriginalPassword - the password that the user entered to be guessed.
// Returns: true if the original password is found, false otherwise.
bool GuessPassword(string OriginalPassword)
{
    string word = "";  // Variable to build each password guess.
    int Counter = 0;   // Counter to keep track of the number of trials.
    
    cout << "\n";  // Print an empty line for formatting.
    
    // Three nested loops to generate all combinations of three uppercase letters.
    for (int i = 65; i <= 90; i++)         // Loop for the first letter (ASCII codes for A-Z).
    {
        for (int j = 65; j <= 90; j++)     // Loop for the second letter.
        {
            for (int k = 65; k <= 90; k++) // Loop for the third letter.
            {
                // Build the password guess by concatenating three characters.
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                
                Counter++;  // Increment the trial counter.
                
                // Print the current trial number and the guessed word.
                cout << "Trial [" << Counter << "] : " << word << endl;
                
                // Check if the guessed word matches the original password.
                if (word == OriginalPassword)
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";
                    
                    return true;  // Return true indicating the password was found.
                }
                
                // Reset the word variable for the next guess.
                word = "";
            }
        }
    }
    
    return false;  // If no match was found (should not happen for valid 3-letter passwords), return false.
}

// Main function: Program entry point.
int main()
{
    // Call ReadPassword to get the user's password, then attempt to guess it using GuessPassword.
    GuessPassword(ReadPassword());
    
    return 0;  // Return 0 to indicate successful program execution.
}