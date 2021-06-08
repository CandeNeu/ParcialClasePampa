#include "cSubte.h"
#include "cPasajero.h"
#include "cCorta.h"
#include "cLarga.h"

cSubte::cSubte():cMedioTransporte()
{
}

cSubte::~cSubte()
{
}

bool cSubte::cobrar(cPasajero* p)
{
	float monto = 0;
	if (dynamic_cast<cCorta*>(p) != NULL)
		monto = 8;
	if (dynamic_cast<cLarga*>(p) != NULL)
		monto = 15;
	else
		throw exception("quien se subio?");
	if (p->get_dinero() < monto)
		return false;
	p->set_dinero(p->get_dinero() - monto);
	return true;
}
