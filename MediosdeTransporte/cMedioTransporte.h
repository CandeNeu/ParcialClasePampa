#pragma once
#include <string>
#define NMAX 50
#include <iostream>
using namespace std;
class cPasajero;
class cMedioTransporte
{
public:
	cMedioTransporte(int tam=NMAX);
	virtual ~cMedioTransporte();

	void agregar(cPasajero*);
	virtual bool cobrar(cPasajero *)=0;
	void eliminar(string dni);
	int getCA() const {return ca;}
	int gettam() const { return tam; }
	void listar() const;
	static int getcounter();
	
	cPasajero* operator[](int pos)const;
	
	cPasajero* quitar(string dni);

protected:
	int ca;
	const int id;
	static int counter;
	int tam;
	cPasajero** lista;

};
void operator+ (cMedioTransporte&mt, cPasajero* p);
cPasajero* operator- (cMedioTransporte* mt, string clave);


