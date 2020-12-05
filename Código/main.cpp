#include <iostream>
#include <vector>
#include <random>
#include "src/Entorno.cpp"
using namespace std;

int main()
{
    Entorno juego;

    juego.bienvenida();
    juego.nomJugador();

    return 0;
}