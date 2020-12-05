#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

class Categorias
{
    private:
        string categoria;
        vector<string> preguntas;
        vector<string> respuestas{"R1","R2","R3","R4","3"};

    public:

    void setCategoria(string _categoria);
    void setPregunta();

    string getCategoria();
    int getPreguntas();
    string getPregunta();
};