#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    ItalianChef chefMario("Mario", 250, 100);
    chefMario.setName("Mario");
    chefMario.makePasta(250, 100);

    return 0;
}
