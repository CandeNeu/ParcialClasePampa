#include <iostream>
#include "cColectivo.h"
#include "cCorta.h"
#include "cLarga.h"
#include "cMedioTransporte.h"
#include "cPasajero.h"
#include "cSubte.h"


int main()
{
	cMedioTransporte* colect = new cColectivo(5);
	cMedioTransporte* subte = new cSubte();

	cPasajero* p1 = new cLarga("1234");
	cPasajero* p2 = new cCorta("13334");
	cin >> *p2;
	cin >> *p1;
	cout << *p2;
	cout << *p1;
	try
	{
		colect->agregar(p1);
		subte->agregar(p1);
		*colect + p2;
		*subte + p2;
	}
	catch (const std::exception& e1)
	{
		cout << e1.what(); 
	}




	colect->listar();
	subte->listar();

	p2 = colect - p2->get_dni();
	p2 = subte->quitar(p1->get_dni());

	colect->listar();
	colect->eliminar(p1->get_dni());
		
	system("pause");

	delete colect;
	delete subte;

	delete p1;
	delete p2;

}