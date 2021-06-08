#include "cColectivo.h"
#include "cPasajero.h"
#include "cCorta.h"
#include "cLarga.h"

cColectivo::cColectivo(int tam) :cMedioTransporte(tam)
{

}

cColectivo::~cColectivo()
{
}

bool cColectivo::cobrar(cPasajero *p)
{
	float monto = 0;
	if (dynamic_cast<cCorta*>(p) != NULL)
		monto = 5;
	if (dynamic_cast<cLarga*>(p) != NULL)
		monto = 10;
	else
		throw exception("quien se subio?");
	if (p->get_dinero() < monto)
		return false;
	p->set_dinero(p->get_dinero() - monto);
	return true;
}
