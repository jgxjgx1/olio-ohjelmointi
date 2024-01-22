#include "cat.h"

string Cat::getName() const
{
    return name;
}

void Cat::setName(const string &newName)
{
    name = newName;
}

void Cat::catInfo()
{
    cout << "**********"<<endl;
    // jos color on private
    cout << "private: nimeni on "<< name<<", olen "<<getColor() <<endl;

    // jos color on protected tai public
    cout << "protected: nimeni on "<< name<<", olen "<<color <<endl;
    cout << "**********"<<endl;
}

Cat::Cat()
{
    cout<<"Cat-luokan muodostaja"<<endl;

}

Cat::~Cat()
{
    cout<<"Cat-luokan tuhoaja"<<endl;

}
