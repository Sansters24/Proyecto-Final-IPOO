#include "Entorno.h"

Entorno::Entorno(/* args */){}
Entorno::~Entorno(){}

void Entorno::saltoLinea()
{
    for (int i = 0; i < 100; i++)
    {
        cout << endl;
    }
}
void Entorno::bienvenida()
{
    cout << " ######################################################################\n";
    cout << " #                 **BIENVENIDO A LA TRIVIA DE IPOO**                 #\n";
    cout << " ######################################################################\n";
    cin.get();
    saltoLinea();
}
void Entorno::nomJugador()
{
    string nombre;
    cout << " ######################################################################\n";
    cout << " >>>>>>>>        Ingrese su nombre:";
    cin >> nombre; setNombre(nombre); cout << endl;
    cout << " ######################################################################\n";
    cin.get();
    saltoLinea();
}
void Entorno::selectCategoria()
{

}
void Entorno::mostrarPregunta()
{

}