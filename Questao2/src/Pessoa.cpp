#include "Pessoa.h"
#include "Endereco.h"
#include <iostream>
#include <string>
using namespace std;

Pessoa::Pessoa()
{

}

Pessoa::Pessoa(string nome)
{
    this->nome = nome;
}

Pessoa::Pessoa(string nome,string telefone,Endereco endereco)
{
    this->nome = nome;
    this->telefone = telefone;
    this->endereco = endereco;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}
void Pessoa::setEndereco(Endereco endereco)
{
    this->endereco = endereco;
}
string Pessoa::getNome()
{
    return nome;
}
string Pessoa::getTelefone()
{
    return telefone;
}
Endereco Pessoa::getEndereco()
{
    return endereco;
}

