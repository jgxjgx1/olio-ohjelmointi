#include "katutaso.h"

void Katutaso::maaritaAsunnot() //2 asuntoa per katutaso
{
    as1->maarita(2, 100);
    as2->maarita(2, 100);

    cout << "Katutaso maaritetty" << endl;
}

double Katutaso::laskeKulutus(double perusKulutus)
{
    return as1->laskeKulutus(perusKulutus) + as2->laskeKulutus(perusKulutus);
}
