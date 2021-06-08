#include "cCorta.h"

ostream& operator<<(ostream& out, const cCorta& c )
{
    const cPasajero& p = c;

    // TODO: Insertar una instrucción "return" aquí
    cout << "tam" << c.tam << "%" << endl;
    return out;

}

istream& operator<<(istream& in, cCorta& c)
{
    cPasajero& p = c;
    cin >> p;
    return in;
    // TODO: Insertar una instrucción "return" aquí
}
