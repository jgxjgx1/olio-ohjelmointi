#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"

class Katutaso
{
private:
    Asunto *as1;
    Asunto *as2;

public:
  Katutaso() {
      as1 = new Asunto;
      as2 = new Asunto;

      cout << "Katutaso luotu" << endl;
  }
  ~Katutaso(){
      delete as1;
      delete as2;
  }

  void maaritaAsunnot();
  double laskeKulutus(double perusKulutus);
};

#endif // KATUTASO_H
