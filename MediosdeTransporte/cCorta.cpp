#include "cCorta.h"

ostream& operator<<(ostream& out, const cCorta& c )
{
    const cPasajero& p = c;

    // TODO: Insertar una instrucci�n "return" aqu�
    cout << "tam" << c.tam << "%" << endl;
    return out;

}

istream& operator<<(istream& in, cCorta& c)
{
    cPasajero& p = c;
    cin >> p;
    return in;
    // TODO: Insertar una instrucci�n "return" aqu�
}
