#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string rua,std::string bairro,std::string cidade,std::string estado,std::string cep,int numero);
        std::string toString();
    protected:

    private:
        std::string rua;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;
        int numero;
};

#endif // ENDERECO_H
