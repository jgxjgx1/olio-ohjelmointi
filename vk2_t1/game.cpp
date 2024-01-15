#include "game.h"

void Game::play()
{
    cout << "Give maximum value: ";
    cin >> maxNumber;

    srand(time(0)); // Asetetaan siemenluku
    randomNumber = rand() % maxNumber + 1; // Satunnaisluku väliltä 0-19 +1 => väli 1-20

    cout<<"GAME CONSTRUCTOR: object initialized with "<< maxNumber <<" as a maximum value" << endl;

    while(game == 1){
        cout << "\nGive your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess < randomNumber) cout << "Your guess is too small" << endl;
        if(playerGuess > randomNumber) cout << "Your guess is too big" << endl;

        if(playerGuess == randomNumber){
            game = 0;
            cout << "Your guess is right = "<< randomNumber <<endl;
            printGameResult();
        }
    }
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = "<<randomNumber<< " with "<<numOfGuesses<<" guess(es)"<<endl;

    Game::~Game();
    {
        cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
    }
}
