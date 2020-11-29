#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//int secretNumber;
int main()
{
//    srand(time(NULL));
//    int secretNumber = rand() % 14;    //declaring variables for STORED NUMBERS
    int guessedNumber;       //it is number guessed by user
//    int guessCounter = 3;    //number of times user have guesses left
    char wannaPlayAgain = 'y';

    while(wannaPlayAgain != 'n'){
        int guessCounter = 3;    //number of times user have guesses left
        srand(time(NULL));
        int secretNumber = rand() % 14;
        while(guessedNumber != secretNumber && guessCounter != 0 ){  //it is telling that until 'guessedNumber' is not equal to 'guessCounter' and 'guessCounter' is not 0 you should run loop
            cout << "guess the number: ";                           //asks user input
            cin >> guessedNumber;
            guessCounter--;
//          cout << "you have " << guessCounter << " guesses left \n";
            if(guessedNumber == secretNumber){
                cout << "\n\n         YOU WIN\n\n";
            }else if(guessCounter == 0){
//            guessCounter--;
                cout << "you have " << guessCounter << " guesses left \n";
            }else if(guessedNumber <= secretNumber){
                cout << "Too low \n";
 //             guessCounter--;
                cout << "you have " << guessCounter << " guesses left \n";
            }else if(guessedNumber >= secretNumber){
                cout << "Too high \n";
 //           guessCounter--;
                cout << "you have " << guessCounter << " guesses left \n";
            }
        }
        if(guessCounter == 0 && guessedNumber != secretNumber){       //and when loop exits it prints 'YOU LOSE' if 'guessCounter' is 0
            cout << "\n\n         YOU LOSE\n\n" << endl;
            cout<< "Secret number was "<< secretNumber << endl;
        }
        cout<< "Do you wanna play again[y/n]: ";
        cin>> wannaPlayAgain;
    }
    return 0;
}
