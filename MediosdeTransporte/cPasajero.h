#pragma once

#include <iostream>
#include <string>
using namespace std;
class cPasajero
{

protected:
	float dinero;
	string dni;
public:
	cPasajero(string dni, float dinero);
	virtual ~cPasajero();

	
	friend ostream& operator<< (ostream& out, const cPasajero& p);
	float get_dinero() { return dinero; }
    string get_dni() const { return dni; }
	void set_dinero(float monto){dinero += monto; }
	virtual void h1() = 0;


};
istream& operator>>(istream& in, cPasajero& p);
