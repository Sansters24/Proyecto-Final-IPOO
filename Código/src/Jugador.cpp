#include "Jugador.h"

Jugador::Jugador(){}
Jugador::Jugador(string _nombre) : nombre(_nombre){}
Jugador::~Jugador(){}

void Jugador::setNombre(string _nombre)
{
    nombre = _nombre;
}

string Jugador::getNombre()
{
    return nombre;
}