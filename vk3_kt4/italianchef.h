#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

#include <iostream>
using namespace std;


class ItalianChef : public Chef
{
public:
    ItalianChef(string a, int x, int y) : Chef(a)
    {
        name = a;
        jauhot = x;
        vesi = y;
    }

    string getName();
    void makePasta(int, int);

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
