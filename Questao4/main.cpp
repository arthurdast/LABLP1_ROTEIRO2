#include <iostream>
#include "Circulo.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "FiguraGeometrica.h"

using namespace std;

int main()
{
   Circulo c(20);
   Quadrado q(10,2);
   Triangulo t(10,2);

   cout<<"\n Circulo "<< c.calcularArea();
   cout<<"\n Quadrado "<< q.calcularArea();
   cout<<"\n Triangulo "<< t.calcularArea();
}
