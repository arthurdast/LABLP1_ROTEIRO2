#include <iostream>
#include "Endereco.h"
#include "Pessoa.h"
using namespace std;

int main()
{
    Endereco end1("rua 1" ,"bairro 1", "cidade1", "estado 1", "cep1" ,1);
    Endereco end2("rua 2" ,"bairro 2", "cidade2", "estado 2", "cep2" ,2);

    Pessoa p1("Arthur");
    p1.setEndereco(end1);
    p1.setTelefone("3255-5555");


    Pessoa p2("Derzu","3222-2222",end2);


    cout<<p1.getNome()<<p1.getEndereco().toString()<<"\n";
    cout<<p2.getNome()<<p2.getEndereco().toString()<<"\n";
}
