#include "game.h"
#include <iostream>
#include <ctime>

using namespace std;


Game::Game(int arvo): numOfGuesses(0), maxNumber(arvo){
    cout << "(Game construction) ";
    cout << "You gave maximum value of: " << maxNumber << endl;
}

Game::~Game()
{
    cout << "(Game destruction) ";
}

void Game::play()
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    numOfGuesses = 0;

    do{
        numOfGuesses++;
        cout << "Guess number between 1-" << maxNumber << ":";
        cin >> playerGuess;
        if (playerGuess < randomNumber){
            cout << "Number is bigger" << endl;
        }
        else if (playerGuess > randomNumber){
            cout << "Number is smaller" << endl;
        }
    }while(playerGuess != randomNumber);
    cout << "Correct!" << endl;

    //tulostetaan lopuksi
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << playerGuess << " with " << numOfGuesses << " guesses";
}
