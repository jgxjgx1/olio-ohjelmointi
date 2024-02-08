#include "kerrostalo.h"

// pointtereilla
void Kerrostalo::KerrostalonMaaritus()
{
  cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();

  cout << "Kerrostalo maaritetty" << endl;
}

double Kerrostalo::laskeKulutus(double perusKulutus)
{
  return eka->laskeKulutus(perusKulutus) + toka->laskeKulutus(perusKulutus) + kolmas->laskeKulutus(perusKulutus);
}
