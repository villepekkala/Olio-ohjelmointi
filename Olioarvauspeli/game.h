#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
class Game
{
public:

    Game(int max);
    void play();
    void printGameResult();
    void peli();
    ~Game ();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
};


#endif // GAME_H
