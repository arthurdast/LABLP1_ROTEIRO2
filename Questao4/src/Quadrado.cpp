#include "Quadrado.h"

Quadrado::Quadrado(float base,float altura)
{
    this->base=base;
    this->altura=altura;
}
float Quadrado::calcularArea()
{
    return (base*altura);
}
