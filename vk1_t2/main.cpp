#include <iostream>
#include <cstdlib>

using namespace std;

void peli();


int main()
{
    peli();
    return 0;
}

void peli()
{
    int game = 1;
    int satunnaisluku;
    int arvaus;

    srand(42); // Asetetaan siemenluku
    satunnaisluku = rand() % 20 + 1; // Satunnaisluku väliltä 0-19 +1 => väli 1-20

    while(game == 1){
        cout << "Arvaa luku: ";
        cin >> arvaus;

        if(arvaus < satunnaisluku) cout << "Luku on suurempi" << endl;
        if(arvaus > satunnaisluku) cout << "Luku on pienempi" << endl;

        if(arvaus == satunnaisluku){
            game = 0;
            cout << "Oikein!" << endl;
        }
    }
}
