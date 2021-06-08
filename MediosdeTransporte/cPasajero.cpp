#include "cPasajero.h"

cPasajero::cPasajero(string dni, float dinero)
{
    this->dni = dni;
    dinero = dinero;
}

cPasajero::~cPasajero()
{
}

ostream& operator<<(ostream& out, const cPasajero& p)
{
    // TODO: Insertar una instrucción "return" aquí
    out << "dni: " << p.get_dni() << endl;
    return out;
}

istream& operator>>(istream& in,  cPasajero& p)
{
    cout << "plata para cargar";
    float aux;
    in >> aux;
    aux += p.get_dinero();
    p.set_dinero(aux);
    return in;
}
