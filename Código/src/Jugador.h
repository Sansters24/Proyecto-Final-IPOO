#ifndef HH_Jugador
#define HH_Jugador
#include <iostream>
#include <string>
using namespace std;

class Jugador
{
private:
    string nombre{};

public:
    Jugador();
    Jugador(string _nombre);
    ~Jugador();

    void setNombre(string _nombre);
    string getNombre();
};

#endif