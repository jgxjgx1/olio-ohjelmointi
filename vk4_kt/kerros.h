#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"
#include <iostream>
using namespace std;

class Kerros
{
public:
  Asunto as1;
  Asunto as2;
  Asunto as3;
  Asunto as4;

  Kerros() {
      cout << "Kerros luotu" << endl;
  }
  ~Kerros(){
  }

  void maaritaAsunnot();
  virtual double laskeKulutus(double perusKulutus);
};

#endif // KERROS_H
