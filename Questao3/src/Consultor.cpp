#include "Consultor.h"
#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

Consultor::Consultor()
{

}
Consultor::Consultor(int matricula,float salario)
{
    setMatricula(matricula);
    setSalario(salario);
}

float Consultor::getSalario()
{
    return salario*0.1;
}

float Consultor::getSalario(float percentual)
{
    salario = salario*(percentual/100);
    return  salario;
}


