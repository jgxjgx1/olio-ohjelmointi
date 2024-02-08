#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>
using namespace std;

class Asunto
{
public:
  int asukasMaara;
  int neliot;

  Asunto() {
      cout << "  Asunto luotu" << endl; // konstruktorin tulostus
  }
  virtual ~Asunto(){
  }

  void maarita(int asukkaat, int pintaAla);
  virtual double laskeKulutus(double perusKulutus); // kulutuksen laskeminen

};

#endif // ASUNTO_H
