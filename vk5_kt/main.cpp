#include <iostream>
using namespace std;

#include "kerrostalo.h"

int main()
{
    Kerrostalo * ptrkerrostalo; // luodaan kerrostalo pointteri
    ptrkerrostalo = new Kerrostalo;

    ptrkerrostalo->KerrostalonMaaritus();
    cout << "Koko kerrostalon kulutus on = " << ptrkerrostalo->laskeKulutus(2) << endl;

    delete ptrkerrostalo;
    ptrkerrostalo = nullptr;
    return 0;
}
