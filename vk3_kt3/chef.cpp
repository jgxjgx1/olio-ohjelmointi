#include "chef.h"

Chef::~Chef()
{
    cout<<"Chef "<<name<<" destruktori" <<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad" <<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup" <<endl;
}


string Chef::getName() const
{
    return name;
}

void Chef::setName(const string &newName)
{
    name = newName;
}
