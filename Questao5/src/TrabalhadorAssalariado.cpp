#include "TrabalhadorAssalariado.h"
#include "Trabalhador.h"
#include <iostream>

using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, float salario)
{
    this->nome = nome;
    this->salario= salario;
}
float TrabalhadorAssalariado::calcularPagamentoSemanal(int horas)
{
    return salario/4;
}
