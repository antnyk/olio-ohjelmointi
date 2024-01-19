#ifndef GAME_H
#define GAME_H


class Game
{
public:
    Game(int arvo);
    ~Game();
    void play();
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    //funktio
    void printGameResult();
};

#endif // GAME_H
