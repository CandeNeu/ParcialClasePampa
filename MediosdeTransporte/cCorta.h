#pragma once
#include "cPasajero.h"
class cCorta : public cPasajero
{
protected:
	int tam;
	bool libro;
public:
	cCorta(string dni) :cPasajero(dni, 10) {
		tam = 5;
		libro = false;
	};
	void h1(){}
	friend ostream& operator<<(ostream&, const cCorta& c);
	friend istream& operator<<(istream&, cCorta& c);
};

