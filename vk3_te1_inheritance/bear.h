#ifndef BEAR_H
#define BEAR_H

#include "animal.h"

#include <iostream>
using namespace std;

class Bear : public Animal
{
private:
    string species;

public:
    string getSpecies() const;
    void setSpecies(const string &newSpecies);
    void bearInfo();
};

#endif // BEAR_H
