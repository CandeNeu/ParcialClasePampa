#pragma once
#include "cPasajero.h"
class cLarga :
    public cPasajero
{
public:
    cLarga(string dni):cPasajero(dni,5){ }
    cLarga(const cPasajero& p) :cPasajero(p) {};
    void h1() {}
};

