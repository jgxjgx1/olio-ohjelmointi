#include <iostream>
#include "chef.h"

using namespace std;

int main()
{
    Chef objectRamsay("Gordon Ramsay");
    objectRamsay.setName("Gordon Ramsay");
    objectRamsay.makeSalad();
    objectRamsay.makeSoup();

    Chef objectBourdain("Anthony Bourdain");
    objectBourdain.setName("Anthony Bourdain");
    objectBourdain.makeSalad();
    objectBourdain.makeSoup();

    return 0;
}
