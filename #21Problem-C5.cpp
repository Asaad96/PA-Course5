// Write a program to generate a random Keys by entering a number of the keys
// Input : 3
// Output : Key [1]: ETAI - HJSD - DRWQ - GEWD
//          Key [2]: ASDG - KLID - VFZX - LOQP
//          Key [3]: ZASL - MOQU - GUWQ - PUTQ

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// My Method

// enum enCharType {
//     CapitalLetter = 1
// };

// int ReadPositiveNumber(string Message)
// {
//     int Number = 0;

//     do
//     {
//         cout << Message << endl;
//         cin >> Number;
//     } while (Number <= 0);

//     return Number;
// }

// int RandomNumber(int From, int To)
// {

//     int rundNUm = rand() % (To - From + 1) + From;
//     return rundNUm;
// }

// char GetRandomCharater( )
// {
//     return char(RandomNumber(65, 90));

//     return '\0';
// }

// int RepeatKeyGen(int Number)
// {

//     for (int j = 1; j <= Number; j++)
//     {
//         cout << "Key" << "[" << j << "]" << " : ";
//             for (int k = 1 ; k <= 4; k++)
//             {
//                 for (int i = 1; i <= 4; i++)
//                 {
//                 cout << GetRandomCharater() ;
//                 }
//                 cout<<" - ";
//             };
//         cout<<endl;
//     }

//     return 0;
// }

// int main()
// {
//     srand((unsigned)time(NULL));
//     cout << RepeatKeyGen(ReadPositiveNumber("Please enter the number of the keys !")) << endl;

//     return 0;
// }

// Teacher's Method


enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};



int RandomNumber ( int From , int To) {


    int randNum = rand() % (To - From + 1) + From ;
    return randNum;
}

char GetRandCharacter ( enCharType CharType )
{
    switch (CharType)
    {
        case enCharType::CapitalLetter:
            {
                return char(RandomNumber(97,122));
                break;
            }
        case enCharType::SmallLetter:
            {
                return char(RandomNumber(65,90));
                break;
            }
        case enCharType::SpecialCharacter:
            {
                return char(RandomNumber(33,47));
                break;
            }
        case enCharType::Digit:
            {
                return char(RandomNumber(48,57));
                break;
            }
    
    }

    return '\0';
}

int ReadPositionNumber(string Message)
{
    int Number = 0 ;
    do 

    {
        cout<<Message<<endl;
        cin>>Number ;
    } while (Number <= 0);
    return Number ;

}


string GenerateWord (enCharType CharType, short  Length) 
{
    string word;


    for ( int i ; i <= Length ; i ++)
    {
        word = word + GetRandCharacter(CharType);
    }

    return word;
}

string GenerateKey() 
{
    string Key  = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = GenerateWord(enCharType::CapitalLetter, 4) ;


    return Key;
}

void GenerateKeys (short NumberOfKeys)
{
    for (int i; i<= NumberOfKeys; i++)
    {
        cout<<"Key [" << i << "] : ";
        cout<< GenerateKey()<< endl;
    }
}

int main () {
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositionNumber ("Please enter how many keys to generate? \n"));

    return 0;
}