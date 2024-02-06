#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"

class Katutaso
{
public:
  Katutaso() {
      cout << "Katutaso luotu" << endl;
  }
  ~Katutaso(){
  }

  void maaritaAsunnot();
  double laskeKulutus(double perusKulutus);

private:
  Asunto as1;
  Asunto as2;
};

#endif // KATUTASO_H
