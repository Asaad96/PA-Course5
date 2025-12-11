// write a program to print random Small letter, Capital letter, Special character and digit in order (and use the func just once)
// output -> i G $ 7

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum kind
{
    small = 1,
    capital = 2,
    special = 3,
    Digit = 4,
};

int RandomNumber(int From, int To)
{

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char SwitchtoChar(kind kind )
{



    switch (kind)
    {
    case (kind :: small):
        {
            return char(RandomNumber(97, 122));
            break;
        }
    case (kind :: capital):
        {
            return char(RandomNumber(65, 90));
            break;
        }
    case (kind :: special):
        {
            return char(RandomNumber(33, 47));
            break;
        }    
    case (kind :: Digit):
        {
            return char(RandomNumber(48, 57));
            break;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << SwitchtoChar(kind::small) << endl;
    cout << SwitchtoChar(kind::capital) << endl;
    cout << SwitchtoChar(kind::special) << endl;
    cout << SwitchtoChar(kind::Digit) << endl;

    return 0;
}
