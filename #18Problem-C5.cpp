// write a program to encrypt/decrypt text 
// input -> Asaad // output -> sdfsfsg

#include <iostream>
#include <string>
using namespace std;

string ReadText() 
{
    string Text ;
    cout << "Please enter your name !\n";
    cin >> Text;

    return Text;
}

// int CountChar ( string Text)
// {
//     char Text;
//     int counter = 0;
//     while (Text[counter] != '\0')
//     {
//         counter ++;

//     }
//     cout << counter;

//     return counter;

    
// }

string EncryptDecryptFun (string Text)
{

    string EncryptName = "";
    string DecryptName = "";
    
    


    for (size_t i = 0;  i < Text.length()  ; i ++)
    {   
        EncryptName += char(Text[i] + 7);

        
    
    }
    

     for (size_t i = 0;  i < EncryptName.length()  ; i ++)
    {   
        DecryptName += char(EncryptName[i] - 7);
        // cout << char (EncryptName[i])<<endl;
        // cout << DecryptName<< endl;
        
    
    }
    cout<<"Encrypted Text is " <<EncryptName<<"\n";

    cout<<"Decrypted Text is " <<DecryptName<<"\n";



    return EncryptName;
    return DecryptName;
}




int main ()
{
EncryptDecryptFun(ReadText());


    return 0;
}

// Teacher's Method

#include <iostream>   // Include the iostream library for input/output operations.
#include <string>     // Include the string library for using std::string.
using namespace std;  // Use the standard namespace to avoid prepending std:: to common objects.

// Function: ReadText
// Purpose: Prompts the user to enter a line of text and reads the full line.
// Returns: The text entered by the user as a string.
string ReadText()
{
    string Text;  // Declare a string variable to store the input text.
    
    cout << "Please enter Text?\n"; // Prompt the user for input.
    getline(cin, Text);              // Read an entire line from standard input.
    
    return Text; // Return the entered text.
}

// Function: EncryptText
// Purpose: Encrypts the given text by shifting each character by a specified encryption key.
// Parameters:
//   Text - the original text to be encrypted.
//   EncryptionKey - a short integer representing the shift value to apply to each character.
// Returns: The encrypted text.
string EncryptText(string Text, short EncryptionKey)
{
    // Loop through each character of the text.
    // Note: Using "<= Text.length()" iterates one extra time (accessing the null terminator), 
    // which may be unintended. Ideally, use "< Text.length()".
    for (int i = 0; i <= Text.length(); i++)
    {
        // Convert the current character to its integer ASCII value,
        // add the encryption key, cast it back to char, and assign it back.
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text; // Return the encrypted text.
}

// Function: DecryptText
// Purpose: Decrypts the given text by reversing the encryption process.
//          It shifts each character back by the specified encryption key.
// Parameters:
//   Text - the encrypted text to be decrypted.
//   EncryptionKey - the same short integer key used during encryption.
// Returns: The decrypted (original) text.
string DecryptText(string Text, short EncryptionKey)
{
    // Loop through each character of the text.
    // Note: Using "<= Text.length()" will process one extra character (the null terminator).
    for (int i = 0; i <= Text.length(); i++)
    {
        // Convert the current character to its ASCII integer value,
        // subtract the encryption key, cast back to char, and assign it back.
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text; // Return the decrypted text.
}

// Main function: Program entry point.
int main()
{
    const short EncryptionKey = 2; // Define a constant encryption key to be used for both encryption and decryption.

    string TextAfterEncryption, TextAfterDecryption;  // Variables to store the encrypted and decrypted text.
    
    // Read the original text from the user.
    string Text = ReadText();
    
    // Encrypt the text using the specified encryption key.
    TextAfterEncryption = EncryptText(Text, EncryptionKey);
    
    // Decrypt the text back to its original form using the same encryption key.
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    // Display the original text.
    cout << "\nText Before Encryption : " << Text << endl;
    // Display the encrypted text.
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    // Display the decrypted text.
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;

    return 0; // Return 0 to indicate successful program execution.
}