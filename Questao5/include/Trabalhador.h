#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>

class Trabalhador
{
    public:
        Trabalhador();
        virtual float calcularPagamentoSemanal();

    protected:
        std::string nome;
        float salario;

    private:
};

#endif // TRABALHADOR_H
