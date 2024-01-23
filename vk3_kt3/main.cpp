#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chefJyrki("Jyrki");
    chefJyrki.setName("Jyrki");

    ItalianChef chefMario("Mario");
    chefMario.setName("Mario");

    chefJyrki.makeSalad();
    chefMario.makePasta();
    chefJyrki.makeSoup();

    return 0;
}
