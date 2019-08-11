#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"


class Quadrado: public FiguraGeometrica
{
    public:
        Quadrado(float base,float altura);
        float calcularArea()override;

    protected:

    private:
        float base;
        float altura;
};

#endif // QUADRADO_H
