#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

class Funcionario
{
    public:
        Funcionario();
        void setMatricula(int matricula);
        void setNome(std::string nome);
        void setSalario(float salario);
        int getMatricula();
        std::string getNome();
        virtual float getSalario();
    protected:
        float salario;

    private:
        int matricula;
        std::string nome;

};

#endif // FUNCIONARIO_H
