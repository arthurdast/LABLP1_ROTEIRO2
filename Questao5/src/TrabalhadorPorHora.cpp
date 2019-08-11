#include "TrabalhadorPorHora.h"
#include "Trabalhador.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{

}
float Trabalhador::calcularPagamentoSemanal(int horas)
{
   if(horas <= 40 )
   {
       return salario/horas;
   }else if(horas > 40 )
   {
       int restoH = horas-40;



   }



   return 0;
}
