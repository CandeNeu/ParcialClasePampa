#pragma once
#include "cMedioTransporte.h"
#include <string>
#include <iostream>
using namespace std;
class cColectivo :
    public cMedioTransporte
{
public:
	cColectivo(int tam);
	virtual ~cColectivo();

	bool cobrar( cPasajero *p);
	void Parar_bruscamente() { cout << "AHHHHHHHH" << endl; }

protected:
	int nro_linea;
};

