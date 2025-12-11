// Requirements:
// 1- Ask for how many round the game will be
// 2- Start each round player vs Computer
// 3- show the results with each round
// 4- If computer wins the round ring a bill, and screen red
// 5- If Player won the round show green screen.
// 6- After all rounds show game over then print game results
// then ask the user if she/he wants to play again


// My Method first attempt 

// #include <iostream>
// #include <ctime>

// using namespace std;

// enum Tools
// {
//     Stone = 1,
//     Paper = 2,
//     Scissors = 3
// };

// int RoundsNumber(string Message)
// {
//     short Number;
//     cout << Message << "\n";
//     cin >> Number;

//     return Number;
// }

// int RandomNumber(int From, int To)
// {
//     int randNum = rand() % (To - From + 1) + From;
//     return randNum;
// }

// int UserChoice()
// {
//     short numberChoice = 0;

//     cout << "Your Choice: [1]: Stone, [2]: Paper, [3]: Scissors ?\n";

//     cin >> numberChoice;

//     return numberChoice;
// }

// int ComputerChoice ()
// {
// return RandomNumber(1,3);
// }

// string ToolName(int choice)
// {
//     switch(choice)
//     {
//         case Stone: return "Stone";
//         case Paper: return "Paper";
//         case Scissors: return "Scissors";
//         default: return "Unknown";
//     }
// }




// tuple<int,int, int >  LogicGame (int &PlayerCounter, int &ComputerCounter, int &Draw)
// {

// int Player = UserChoice();
// int Computer = ComputerChoice();



// // Draw
// if ( Player == Computer )
// {
// cout << "\033[43m"; 
//    cout<<"Player Choice: "<< ToolName(Player)<<endl;
//    cout<<"Computer Choice: "<< ToolName(Computer)<<endl;
// cout << "Draw (No Winner)\n";
// Draw++;

// }

// // Player Wins
// else if ((Player == Stone && Computer == Scissors ) || 
//     (Player == Scissors && Computer == Paper) ||
//     (Player == Paper && Computer == Stone))
// {
//     cout << "\033[42m";
//     cout<<"Player Choice: "<< ToolName(Player)<<endl;
//     cout<<"Computer Choice: "<< ToolName(Computer)<<endl;
//     cout << "Player Wins\n";
//     PlayerCounter++;
// }

// else  {
//     cout << "\033[41m";
//     cout <<"\a";
//     cout<<"Player Choice: "<< ToolName(Player)<<endl;
//     cout<<"Computer Choice: "<< ToolName(Computer)<<endl;
//     cout << " Computer Wins\n";
//     ComputerCounter++;

// }

// return {PlayerCounter, ComputerCounter, Draw};
// }


// void  PlayRound (int &PlayerCounter, int &ComputerCounter, int &Draw )
// {

//     // int Player = 0;
//     // int Computer = 0;
//     LogicGame (PlayerCounter, ComputerCounter, Draw);



// }


// void RoundBegins(short Number, int &PlayerCounter, int &ComputerCounter, int &Draw)
// {int again;
    
//     do {
//         int PlayerCounter = 0 ;
//         int  ComputerCounter = 0 ;
//         int  Draw  = 0;
//     Number = RoundsNumber("How many Rounds do you to play? ");
//     //short  RoundCounter = 0;
//     for (int i = 1; i <= Number; i++)
//     {
//         cout << "Round [" << i << "] Begins: \n";
           
//             cout << "\n---------------Round["<< i<<"]-----------------\n\n";
//              PlayRound(PlayerCounter,ComputerCounter, Draw);
//              cout << "\033[0m"; 
//             cout << "-----------------------------------------\n\n";
//     }
    
    

        
    
//     cout << "--------------------------------------------------\n";
//     cout << "--------------  xxx Game over xxx   -------------\n";
//     cout << "--------------------------------------------------\n";
//     cout << "------------- +++ [Game Results] +++  ------------\n";

//     cout << "Game Rounds: " << Number<<endl;
//     cout << "Player Won Times: "<< PlayerCounter<<endl; 
//     cout << "Computer Won Times: "<< ComputerCounter<<endl;
//     cout << "Draw Times: "<< Draw<<endl; 
//     cout << "Final Winner: ";
//      if (PlayerCounter > ComputerCounter)
//      {cout<< "Player Won";} 
//      else 
//      cout << "Computer Won" <<endl;
//     cout <<"\n";
//     cout << " DO You Want to Play Again? [0] No, [1] Yes \n";
//     cin >> again;
//     }
//     while ( again != 0 );

// }


// int main()
// {
//     srand((unsigned)time(NULL));

//     short Number;
//     int Player = 0;
//     int Computer = 0 ;
//     int Draw =0;
//     RoundBegins(Number, Player, Computer, Draw);
//     //ShowFinalResult(Number);
    

//     return 0;
// }



// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// enum enGameChoice  { Stone = 1, Paper = 2, Scissors = 3};

// enum enWinner { Player = 1 , Computer = 2 , Draw = 3};

// struct stRoundInfo  
// {
//     short RoundNumber = 0;
//     enGameChoice PlayerChoice ;
//     enGameChoice ComputerChoice;
//     enWinner Winner; 
//     string WinnerName;

// };

// struct stGameResults 
// {
//  short GameRounds = 0;
//  short PlayerWinTimes = 0;
//  short ComputerWinTimes = 0;
//  short DrawTimes = 0;
//  enWinner GameWinner ;
//  string WinnerName = "";

// };


// int RandomNumber(int From, int To)
// {

//     int randNum = rand() % (To - From + 1) + From;
//     return randNum;
// }

// string winnerName(enWinner Winner)
// {
//     string arrWinnerName[3] = {"Player", "Computer", "No Winner"};
//     return arrWinnerName[Winner - 1];
// }



// enGameChoice ReadPlayerChoice ()
// {
//     short Choice = 1;

//     do 
//     {
//         cout << "\nYour Choice: [1]: Stone, [2]:Paper, [3]:Scissors ? ";
//         cin >> Choice;
//     } while (Choice < 1 || Choice > 3);
//     return (enGameChoice)Choice;

// }

// enGameChoice GetComputerChoice ()
// {
//     return (enGameChoice)RandomNumber(1,3);
// }

// string WinnerName(enWinner Winner) 
// {
//  string arrWinnerName[3] = {"Player", "Computer", "No Winner"};
//  return arrWinnerName[ Winner - 1];
// }



// // enWinner WhoWonTheRound(stRoundInfo RoundInfo)
// // {
// //     if (RoundInfo.PlayerChoice == RoundInfo.ComputerChoice)
// //     {
// //         return enWinner::Draw;
// //     }

// //     switch (RoundInfo.PlayerChoice)
// //     {
// //     case enGameChoice::Stone:
// //         if (RoundInfo.ComputerChoice == enGameChoice::Paper)
// //         {
// //             return enWinner::Computer;
// //         }
// //         break;
    
// //         case enGameChoice::Paper:
// //         if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
// //         {
// //             return enWinner::Computer;
// //         }
// //         break;
// //         case enGameChoice::Scissors:
// //         if (RoundInfo.ComputerChoice == enGameChoice::Stone)
// //         {
// //             return enWinner::Computer;
// //         }
// //         break;
 
// //     };

// // }



// enWinner WhoWonTheRound(stRoundInfo RoundInfo)
// {
//     if (RoundInfo.PlayerChoice == RoundInfo.ComputerChoice)
//         return enWinner::Draw;

//     switch (RoundInfo.PlayerChoice)
//     {
//         case enGameChoice::Stone:
//             if (RoundInfo.ComputerChoice == enGameChoice::Paper)
//                 return enWinner::Computer;
//             break;

//         case enGameChoice::Paper:
//             if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
//                 return enWinner::Computer;
//             break;

//         case enGameChoice::Scissors:
//             if (RoundInfo.ComputerChoice == enGameChoice::Stone)
//                 return enWinner::Computer;
//             break;
//     }

//     return enWinner::Player; // مهم جداً
// }

// enWinner WhoWonTheGame (short PlayerWinTimes, short ComputerWinTimes)
// {
//     if (PlayerWinTimes > ComputerWinTimes )
//         return enWinner:: Player;
//     else if (ComputerWinTimes > PlayerWinTimes)
//         return enWinner:: Computer;
//     else 
//         return enWinner::Draw;
// }

// stGameResults FillGameResults(int GameRounds, short PlayerWinTimes, short ComputerWiTimes, short DrawTimes)
// {
//     stGameResults GameResults;

//     GameResults.GameRounds = GameRounds;
//     GameResults.PlayerWinTimes = PlayerWinTimes;
//     GameResults.ComputerWinTimes = ComputerWiTimes;
//     GameResults.DrawTimes = DrawTimes;
//     GameResults.GameWinner = WhoWonTheRound(PlayerWinTimes, ComputerWiTimes, DrawTimes);
//     GameResults.WinnerName = WinnerName (GameResults.GameWinner);

//     return GameResults;

// }   


// string Tabs(short NumberOfTabs) {
//     string t = "";

//     for (int i = 1; i < NumberOfTabs; i++)
//     {
//         t = t + "\t";
//         cout << t; 
//     }

//     return t ;
// }



// short ReadHowManyRounds()
// {
//     short GameRounds = 1;

//     do 
//     {
//         cout << "How Many Rounds 1 to 10 ? \n"; 
//         cin >> GameRounds;

//     } while (GameRounds < 1 || GameRounds > 10);

//     return GameRounds;
// }

// string ChoiceName (enGameChoice Choice)
// {
//     string arrGameChoice[3] = { "Stone" , "Paper", "Scissors"};
//     return arrGameChoice[Choice - 1];
// }

// void SetWinnerScreenColor (enWinner Winner) 
// {

//     switch (Winner)
//     {
//     case enWinner::Player :
//         cout << "\033[42m"; 
//         break;
    
//     case enWinner::Computer:
//         cout << "\033[41m";
//         cout <<"\a"; 
//     default:
//         cout << "\033[45m"; 
//         break;
//     }
// }

// void PrintRoundResults (stRoundInfo RoundInfo){
//         cout << "\n ------------Round [" << RoundInfo.RoundNumber << "] -------------------\n\n";
//         cout << "Player Choice: " << ChoiceName(RoundInfo.Playerchoice ) << endl;
//         cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
//         cout << "Round Winner : " << RoundInfo.WinnerName << "] \n";
//         cout << "--------------------------------------\n "<< endl; 

//         SetWinnerScreenColor(RoundInfo.Winner);
// }

// void ShowGameOverScreen() 
// {

//     cout << Tabs(2) << "===============================================================\n\n";
//     cout << Tabs(2) << "                    XXXX G A M E   O V E R  XXXX\n";
//     cout << Tabs(2) << "===============================================================\n\n";

// }


// void ShowFinalGameResults (stGameResults GameResults) 
// {
//     cout << Tabs(2) << "---------------------- [Game Results] ------------------------\n\n";
//     cout << Tabs(2) << " Game Rounds         : " << GameResults.GameRounds << endl;
//     cout << Tabs(2) << " Player Won times    : " << GameResults.PlayerWinTimes << endl;
//     cout << Tabs(2) << " Computer Won times  : " << GameResults.ComputerWinTimes << endl;
//     cout << Tabs(2) << " Draw Times          : " << GameResults.DrawTimes << endl;
//     cout << Tabs(2) << " Final Winner        : " << GameResults.WinnerName << endl;
//      cout << Tabs(2) << "--------------------------------------------------------------\n\n";

//      SetWinnerScreenColor(GameResults.GameWinner);
// }



// void ResetScreen(){
//     system("clear");
//     cout << "\033[0m"; 
// }

// stGameResults PlayGame(short HowManyRounds) 
// {

//     stRoundInfo RoundInfo;
//     short PlayerWinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

//     for (short GameRound = 1; GameRound <= HowManyRounds ; GameRound ++)
//     {
//         cout << "\nRound [" << GameRound << "] begins: \n";
//         RoundInfo.RoundNumber = GameRound;
//         RoundInfo.PlayerChoice = ReadPlayerChoice();
//         RoundInfo.ComputerChoice = GetComputerChoice();
//         RoundInfo.Winner = WhoWonTheRound(RoundInfo);
//         RoundInfo.WinnerName = winnerName(RoundInfo.Winner);

        
//         if (RoundInfo.Winner == enWinner::Player)
//             PlayerWinTimes++;

//         else if (RoundInfo.Winner == enWinner::Computer)
//             ComputerWinTimes++;
//         else 
//             DrawTimes++;

//         PrintRoundResults(RoundInfo);
//     }

//     return FillGameResults(HowManyRounds, PlayerWinTimes, ComputerWinTimes, DrawTimes);

// }


// void StartGame()
// {

//     char PlayAgain = 'Y';

//     do 
//     {
//         ResetScreen();
//         stGameResults GameResults = PlayGame(ReadHowManyRounds());
//         ShowGameOverScreen();
//         ShowFinalGameResults(GameResults);

//         cout << endl << Tabs(3) << "Do You Want to Play again? Y/N? ";
//         cin >> PlayAgain;

//     } while (PlayAgain == 'Y' || PlayAgain == 'y');


// }


// int main () 
// {
//     srand((unsigned)time(NULL));

//     StartGame();

// return 0;
// }




#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enGameChoice  { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player = 1 , Computer = 2 , Draw = 3 };

struct stRoundInfo  
{
    short RoundNumber = 0;
    enGameChoice PlayerChoice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct stGameResults 
{
 short GameRounds = 0;
 short PlayerWinTimes = 0;
 short ComputerWinTimes = 0;
 short DrawTimes = 0;
 enWinner GameWinner;
 string WinnerName = "";
};


int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

string WinnerName(enWinner Winner)
{
    string arrWinnerName[3] = {"Player", "Computer", "No Winner"};
    return arrWinnerName[Winner - 1];
}

enGameChoice ReadPlayerChoice()
{
    short Choice = 1;

    do 
    {
        cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? ";
        cin >> Choice;
    } 
    while (Choice < 1 || Choice > 3);

    return (enGameChoice)Choice;
}

enGameChoice GetComputerChoice()
{
    return (enGameChoice)RandomNumber(1,3);
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{
    if (RoundInfo.PlayerChoice == RoundInfo.ComputerChoice)
        return enWinner::Draw;

    switch (RoundInfo.PlayerChoice)
    {
        case enGameChoice::Stone:
            if (RoundInfo.ComputerChoice == enGameChoice::Paper)
                return enWinner::Computer;
            break;

        case enGameChoice::Paper:
            if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
                return enWinner::Computer;
            break;

        case enGameChoice::Scissors:
            if (RoundInfo.ComputerChoice == enGameChoice::Stone)
                return enWinner::Computer;
            break;
    }

    return enWinner::Player; // مهم جداً
}

enWinner WhoWonTheGame(short PlayerWinTimes, short ComputerWinTimes)
{
    if (PlayerWinTimes > ComputerWinTimes)
        return enWinner::Player;
    else if (ComputerWinTimes > PlayerWinTimes)
        return enWinner::Computer;
    else
        return enWinner::Draw;
}

stGameResults FillGameResults(int GameRounds, short PlayerWinTimes, short ComputerWiTimes, short DrawTimes)
{
    stGameResults GameResults;

    GameResults.GameRounds = GameRounds;
    GameResults.PlayerWinTimes = PlayerWinTimes;
    GameResults.ComputerWinTimes = ComputerWiTimes;
    GameResults.DrawTimes = DrawTimes;

    GameResults.GameWinner = WhoWonTheGame(PlayerWinTimes, ComputerWiTimes); // تصحيح مهم
    GameResults.WinnerName  = WinnerName(GameResults.GameWinner);

    return GameResults;
}

string Tabs(short NumberOfTabs)
{
    string t = "";
    for (short i = 0; i < NumberOfTabs; i++)
        t += "\t";
    return t;
}

short ReadHowManyRounds()
{
    short GameRounds = 1;

    do 
    {
        cout << "How Many Rounds 1 to 10 ? \n"; 
        cin >> GameRounds;
    } 
    while (GameRounds < 1 || GameRounds > 10);

    return GameRounds;
}

string ChoiceName(enGameChoice Choice)
{
    string arrGameChoice[3] = {"Stone", "Paper", "Scissors"};
    return arrGameChoice[Choice - 1];
}

void SetWinnerScreenColor(enWinner Winner) 
{
    switch (Winner)
    {
        case enWinner::Player:
            cout << "\033[42m"; 
            break;

        case enWinner::Computer:
            cout << "\033[41m";
            cout << "\a"; 
            break;

        default:
            cout << "\033[45m"; 
            break;
    }
}

void PrintRoundResults(stRoundInfo RoundInfo)
{
    cout << "\n ------------Round [" << RoundInfo.RoundNumber << "] -------------------\n\n";
    cout << "Player Choice  : " << ChoiceName(RoundInfo.PlayerChoice) << endl; // تصحيح
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner   : " << RoundInfo.WinnerName << "\n";
    cout << "--------------------------------------\n\n";

    SetWinnerScreenColor(RoundInfo.Winner);
}

void ShowGameOverScreen()
{
    cout << Tabs(2) << "===============================================================\n\n";
    cout << Tabs(2) << "                    XXXX GAME OVER XXXX\n";
    cout << Tabs(2) << "===============================================================\n\n";
}

void ShowFinalGameResults(stGameResults GameResults)
{
    cout << Tabs(2) << "---------------------- [Game Results] ------------------------\n\n";
    cout << Tabs(2) << " Game Rounds         : " << GameResults.GameRounds << endl;
    cout << Tabs(2) << " Player Won times    : " << GameResults.PlayerWinTimes << endl;
    cout << Tabs(2) << " Computer Won times  : " << GameResults.ComputerWinTimes << endl;
    cout << Tabs(2) << " Draw Times          : " << GameResults.DrawTimes << endl;
    cout << Tabs(2) << " Final Winner        : " << GameResults.WinnerName << endl;
    cout << Tabs(2) << "--------------------------------------------------------------\n\n";

    SetWinnerScreenColor(GameResults.GameWinner);
}

void ResetScreen()
{
    system("clear"); // للماك (بديل cls)
    cout << "\033[0m"; 
}

stGameResults PlayGame(short HowManyRounds)
{
    stRoundInfo RoundInfo;
    short PlayerWinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
    {
        cout << "\nRound [" << GameRound << "] begins:\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.PlayerChoice = ReadPlayerChoice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player)
            PlayerWinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer)
            ComputerWinTimes++;
        else
            DrawTimes++;

        PrintRoundResults(RoundInfo);
    }

    return FillGameResults(HowManyRounds, PlayerWinTimes, ComputerWinTimes, DrawTimes);
}

void StartGame()
{
    char PlayAgain = 'Y';

    do 
    {
        ResetScreen();
        stGameResults GameResults = PlayGame(ReadHowManyRounds());
        ShowGameOverScreen();
        ShowFinalGameResults(GameResults);

        cout << endl << Tabs(3) << "Do You Want to Play again? Y/N? ";
        cin >> PlayAgain;

    } 
    while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}
