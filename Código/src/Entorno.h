#ifndef HH_Entorno
#define HH_Entorno
#include <iostream>
#include <string>
#include "Jugador.cpp"
using namespace std;

class Entorno : public Jugador
{
private:
    

public:
    Entorno();
    ~Entorno();

    void saltoLinea();
    void bienvenida();
    void nomJugador();
    void selectCategoria();
    void mostrarPregunta();
};



#endif