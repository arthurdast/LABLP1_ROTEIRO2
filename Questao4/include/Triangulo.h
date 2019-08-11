#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"


class Triangulo: public FiguraGeometrica
{
    public:
        Triangulo(float base,float altura);
        float calcularArea()override;

    protected:

    private:
        float base;
        float altura;
};

#endif // TRIANGULO_H
