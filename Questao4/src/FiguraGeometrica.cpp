#include "FiguraGeometrica.h"
#include <iostream>
#include <string>
using namespace std;

FiguraGeometrica::FiguraGeometrica()
{

}

void FiguraGeometrica:: setNome(string nome)
{
    this->nome = nome;
}

string FiguraGeometrica::getNome()
{
    return nome;
}

float FiguraGeometrica::calcularArea()
{
    return 0;
}
