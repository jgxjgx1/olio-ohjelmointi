#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Game
{
public:
    Game(int a){
        maxNumber = a;
    }

    ~Game(){
    };

    void play();

    int game = 1;

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();
};

#endif // GAME_H
