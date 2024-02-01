#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"

class Katutaso : public Kerros
{
public:
  Katutaso() {
      cout << "Katutaso luotu" << endl;
  }
  ~Katutaso(){
  }

  void maaritaAsunnot();
  double laskeKulutus(double perusKulutus) override;
};

#endif // KATUTASO_H
