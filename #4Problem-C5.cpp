// Problem #4 all Perfect Number from 1 to N


#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber (string Message)

{
    int Number= 0; 

    do {
        cout<<Message<<endl;
        cin>> Number ;
    } while (Number <= 0);

    return Number; 
    
}

bool isNotPerfect (int Number)
{
    int Sum = 0;

    for (int i = 1 ; i < Number ; i ++ )
    {
        if (Number % i == 0  )
        Sum += i;
        
    }

    return Sum == Number ;
}

void PrintResults ( int Number)
{
    if (isNotPerfect(Number))
    cout<<"The Number is Perfect \n";
    else 
    cout << "The Number is NOT perfect \n";
}


void PrintFrom1ToN (int Number)

{
    for (int i = 1 ; i < Number ; i++)
        {
            if ( isNotPerfect(i)) {

                cout<<i<<"\n"; 
            }

        }
}


int main ()
{
    PrintFrom1ToN(ReadPositiveNumber("Please Enter a Positive Number"));

    return 0;
}