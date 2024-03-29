#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome,std::string telefone,Endereco endereco);
        void setNome(std::string nome);
        void setTelefone(std::string telefone);
        void setEndereco(Endereco endereco);
        std::string getNome();
        std::string getTelefone();
        Endereco getEndereco();
    protected:

    private:
        std::string nome;
        std::string telefone;
        Endereco endereco;
};

#endif // PESSOA_H
