#include "italianchef.h"


string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int, int)
{
    cout<<"Chef "<<name<<" makes pasta with special recipe" <<endl;
    cout<<"Chef "<<name<<" users jauhot = "<< jauhot <<endl;
    cout<<"Chef "<<name<<" users vesi = "<< vesi <<endl;
}
