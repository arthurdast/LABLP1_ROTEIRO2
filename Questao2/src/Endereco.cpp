#include "Endereco.h"
#include <iostream>
#include <string>
using namespace std;

Endereco::Endereco( )
{

}
Endereco::Endereco( std::string rua,std::string bairro,std::string cidade,std::string estado,std::string cep,int numero)
{
        this->rua=rua;
        this->bairro=bairro;
        this->cidade=cidade;
        this->estado=estado;
        this->cep=cep;
        this->numero=numero;
}


string  Endereco::toString()
{
    string str = to_string(numero);
    return "Rua : " + rua + " Numero: "+ str + " Bairro: " + bairro+ " Cidade: " + cidade + " Estado: " + estado + " Cep: " + cep ;
}
