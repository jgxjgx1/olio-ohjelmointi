#include "kerros.h"

void Kerros::maaritaAsunnot() //4 asuntoa per kerros
{
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);

  cout << "Kerros maaritetty" << endl;
}

double Kerros::laskeKulutus(double perusKulutus)
{
  return as1->laskeKulutus(perusKulutus) + as2->laskeKulutus(perusKulutus) + as3->laskeKulutus(perusKulutus) + as4->laskeKulutus(perusKulutus);
}
