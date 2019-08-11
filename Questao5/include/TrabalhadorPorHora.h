#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <iostream>

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora(std::string nome,float salario,float valorDaHora);
        float calcularPagamentoSemanal(int horas);

    protected:

    private:
        float valorDaHora;
};

#endif // TRABALHADORPORHORA_H
