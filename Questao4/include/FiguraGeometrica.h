#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual float calcularArea();
        void setNome(std::string nome);
        std::string getNome();

    protected:

    private:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
