#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo(float raio);
        float calcularArea()override;

    protected:

    private:
        float raio;
};

#endif // CIRCULO_H
