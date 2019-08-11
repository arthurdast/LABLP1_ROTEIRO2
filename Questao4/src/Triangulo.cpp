#include "Triangulo.h"

Triangulo::Triangulo(float base,float altura)
{
    this->base=base;
    this->altura=altura;
}

float Triangulo::calcularArea()
{
    return (base*altura)/2;
}
