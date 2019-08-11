#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

Funcionario::Funcionario()
{

}

void Funcionario::setMatricula(int matricula)
{
    this->matricula=matricula;
}
void Funcionario::setNome(string nome)
{
    this->nome=nome;
}
void Funcionario::setSalario(float salario)
{
    this->salario=salario;
}
int Funcionario::getMatricula()
{
    return matricula;
}
string Funcionario::getNome()
{
    return nome;
}
float Funcionario::getSalario()
{
    return salario;
}
