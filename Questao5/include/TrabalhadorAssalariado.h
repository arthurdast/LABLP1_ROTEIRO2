#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"
#include <iostream>

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado(std::string nome,float salario);
        float calcularPagamentoSemanal();
    protected:

    private:
};

#endif // TRABALHADORASSALARIADO_H
