#include "asunto.h"

void Asunto::maarita(int asukkaat, int pintaAla)
{
  asukasMaara = asukkaat;
  neliot = pintaAla;

  cout << "Asunto maaritetty: asukkaita= " << asukasMaara << " nelioita= " << neliot << endl;
}

double Asunto::laskeKulutus(double perusKulutus)
{
  return perusKulutus * neliot;
}

