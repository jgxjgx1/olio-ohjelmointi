#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"

#include <iostream>
using namespace std;

class Kerros
{
private:
    Asunto *as1;
    Asunto *as2;
    Asunto *as3;
    Asunto *as4;

public:
  Kerros() {
      as1 = new Asunto;
      as2 = new Asunto;
      as3 = new Asunto;
      as4 = new Asunto;

      cout << "Kerros luotu" << endl;
  }
  virtual ~Kerros(){
      delete as1;
      delete as2;
      delete as3;
      delete as4;
  }

  void maaritaAsunnot();
  virtual double laskeKulutus(double perusKulutus);
};

#endif // KERROS_H
