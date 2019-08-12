#include <iostream>
#include"Trabalhador.h"
#include"TrabalhadorAssalariado.h"
#include"TrabalhadorPorHora.h"

using namespace std;

int main()
{
    TrabalhadorAssalariado ta("Arthur",4000);
    TrabalhadorPorHora tph("Derzu", 50);

    cout<< "\n Nome : " << ta.getNome()<< " Salario Semanal : " << ta.calcularPagamentoSemanal(0) ;
    cout<< "\n Nome : " << tph.getNome()<<" Salario Semanal : " << tph.calcularPagamentoSemanal(50);


}
