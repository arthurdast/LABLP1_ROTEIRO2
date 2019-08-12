#include "TrabalhadorPorHora.h"
#include "Trabalhador.h"
#include <iostream>

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora(string nome,float valorDaHora)
{
    this->nome=nome;
    this->valorDaHora = valorDaHora;
    this->salario=0;
}
float TrabalhadorPorHora::calcularPagamentoSemanal(int horas)
{
   if(horas < 0 )
   {
       return 0;
   }
   if(horas <= 40 )
   {
       salario = valorDaHora * horas;
       return salario/4;

   }else if(horas > 40 )
   {
       float horaTotal = ((horas-40)*1.5)+40;
       salario = valorDaHora * horaTotal;
       return salario/4;
   }
   return 0;
}
