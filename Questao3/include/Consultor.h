#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"
#include <iostream>
#include <string>

class Consultor : public Funcionario
{
    public:
        Consultor();
        Consultor(int matricula,float salario);
        float getSalario() override;
        float getSalario(float percentual);

    protected:

    private:
};

#endif // CONSULTOR_H
