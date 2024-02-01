#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
private:
  Katutaso eka;
  Kerros toka;
  Kerros kolmas;

public:
  Kerrostalo() {
      cout << "Kerrostalo luotu" << endl;
  }
  ~Kerrostalo() {
  }

  void KerrostalonMaaritus();
  double laskeKulutus(double perusKulutus);
};

#endif // KERROSTALO_H
