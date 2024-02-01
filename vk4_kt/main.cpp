#include <iostream>
using namespace std;

#include "kerrostalo.h"

int main()
{
    Kerrostalo kerrostalo; // luodaan kerrostalo objekti
    kerrostalo.KerrostalonMaaritus();

    cout << "Koko kerrostalon kulutus on = " << kerrostalo.laskeKulutus(2) << endl;
    return 0;
}
