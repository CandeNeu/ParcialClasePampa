#include "cMedioTransporte.h"
#include "cPasajero.h"
#include "cCorta.h"
#include "cLarga.h"

cMedioTransporte::cMedioTransporte(int tam):id(counter++)
{

	this->tam = tam;
	ca = 0;
	lista = new cPasajero*[tam];
	for (int i = 0 ; i < tam; i++)
	{
		lista[i] = NULL;
	}

}

cMedioTransporte::~cMedioTransporte()
{
	if (lista != NULL) {
		if(false)
			for (int i = 0; i < tam; i++)
			{
				lista[i] = NULL;
				delete lista[i];
			}
		delete[] lista;
	}

}

void cMedioTransporte::agregar(cPasajero* p)
{
	if (ca >= tam)
		throw exception("no hay lugar");
	if (cobrar(p))
		lista[ca++] = p;
	else
		throw exception("bajate");
}

void cMedioTransporte::eliminar(string dni)
{
	cPasajero* p = quitar(dni);
	if (p != NULL)
		delete p;
}

void cMedioTransporte::listar() const
{
	for (int i = 0; i < ca; i++)
	{
		if (dynamic_cast<cCorta*>(lista[i]))
		cout << *((cCorta*)lista[i]) << endl;
		if (dynamic_cast<cLarga*>(lista[i]))
			cout << *((cLarga*)lista[i]) << endl;

	}
}
int cMedioTransporte::counter = 0;
int cMedioTransporte::getcounter()
{
	return counter;
}

cPasajero* cMedioTransporte::operator[](int pos) const
{
	if (pos > 0 && pos < ca)
	{
		return lista[pos];
	}
	return nullptr;
}

cPasajero* cMedioTransporte::quitar(string dni)
{
	int pos = 0;
	for (pos = 0; pos < ca; pos++)
	{
		if (lista[pos]->get_dni() == dni)
			break;
	}
	if (pos == ca)
		return nullptr;
	cPasajero* aux = lista[pos];

	for (int i = pos; i < ca - 1; i++)
	{
			lista[i] = lista[i + 1];
	}
	ca--;
	lista[ca] = NULL;
	return aux;
}

void operator+(cMedioTransporte& mt, cPasajero* p)
{
	mt.agregar(p);
}

cPasajero* operator-(cMedioTransporte* mt, string clave)
{
	return mt->quitar(clave);
}
