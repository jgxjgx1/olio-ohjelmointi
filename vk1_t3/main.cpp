#include <iostream>
#include <cstdlib>

using namespace std;

int maxnum;
int arvaukset = 0;

int game(int maxnum);

int main()
{
    cout << "Anna luku: ";
    cin >> maxnum;

    game(maxnum);

    cout << "Arvauksia meni: ";
    cout << arvaukset << endl;
    return 0;
}

int game(int maxnum)
{
    int game = 1;
    int satunnaisluku;
    int arvaus;

    srand(42); // Asetetaan siemenluku
    satunnaisluku = rand() % maxnum + 1; // Satunnaisluku väliltä 0-19 +1 => väli 1-20

    while(game == 1){
        cout << "\nArvaa luku: ";
        cin >> arvaus;
        arvaukset++;

        if(arvaus < satunnaisluku) cout << "Luku on suurempi" << endl;
        if(arvaus > satunnaisluku) cout << "Luku on pienempi" << endl;

        if(arvaus == satunnaisluku){
            game = 0;
            cout << "Oikein!" << endl;
            arvaukset -= 1;
        }
    }
    return arvaukset;
}
