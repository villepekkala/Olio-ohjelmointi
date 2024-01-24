#include "game.h"



Game::Game(int max)
    : maxNumber(max), numOfGuesses(0)
{
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
       cout << "object initialized with " << maxNumber << " as a maxium value" << endl;
}

    void Game::play()
    {
        do {
            cout << "Give your guess between 1-" << maxNumber << endl;
            cin >> playerGuess;

            numOfGuesses++;
            if (playerGuess < randomNumber) {
                cout << "Your guess is too small" << endl;
            } else if (playerGuess > randomNumber) {
                cout << "Your guess is too big" << endl;
            }
        } while (playerGuess != randomNumber);

        cout << "Your guess is right = " << playerGuess << endl;
    }

    Game::~Game()
    {

        cout << "You guessed the right answer = " <<playerGuess<< " with " << numOfGuesses << " guesses"<< endl;

    }
