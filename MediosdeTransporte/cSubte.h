#pragma once
#include "cMedioTransporte.h"
#include <string>
#include <iostream>
class cSubte :
    public cMedioTransporte
{

public:
	cSubte();
	virtual ~cSubte();

	void anuncio_inentendible() { cout << "blablabla" << endl; }
	bool cobrar(cPasajero* p);

private:
	string color;
	int ramal;
};

