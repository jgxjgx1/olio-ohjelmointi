#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
private:
  Katutaso *eka;
  Kerros *toka;
  Kerros *kolmas;

public:
  Kerrostalo() {
      eka = new Katutaso;
      toka = new Kerros;
      kolmas = new Kerros;

      cout << "Kerrostalo luotu" << endl;
  }
  ~Kerrostalo() {
      delete eka;
      delete toka;
      delete kolmas;
  }

  void KerrostalonMaaritus();
  double laskeKulutus(double perusKulutus);
};

#endif // KERROSTALO_H
