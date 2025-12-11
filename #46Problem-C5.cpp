// Write a program to print abd of Numbers, don't use built in abs function 



#include <iostream>
#include <math.h>

using namespace std;


float ReadNumber () 
{
    float Number = 0; 
    
        cout << "Please Enter a Number " <<endl;

        cin >> Number; 

    return Number;
}


float MyABS (float Number)
{
    

if (Number < 0 )
{
    return -1 * (Number) ;
}
else


return Number;

}



int main ()
{ float Number = ReadNumber();
    

    cout<< "My ABS Result " << MyABS(Number) << endl;


return 0; 
}