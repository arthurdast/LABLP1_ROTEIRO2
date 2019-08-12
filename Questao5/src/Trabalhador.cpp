#include "Trabalhador.h"
#include <iostream>

using namespace std;

Trabalhador::Trabalhador()
{

}
string Trabalhador::getNome()
{
    return nome;
}
float Trabalhador::getSalario()
{
    return salario;
}

float Trabalhador::calcularPagamentoSemanal(int horas)
{
    return 0;
}
