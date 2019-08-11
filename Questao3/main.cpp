#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
    Consultor c1(1,100);
    Consultor c2(2,300);
    Consultor c3(3,00);

    cout<< "\n matricula : " << c1.getMatricula()<<"  Salario : " << c1.getSalario();
    cout<< "\n matricula : " << c2.getMatricula()<<" Salario : " << c2.getSalario(50);
    cout<< "\n matricula : " << c3.getMatricula()<<" Salario : " << c3.getSalario(75);

}
