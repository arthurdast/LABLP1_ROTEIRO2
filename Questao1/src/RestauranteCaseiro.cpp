#include "RestauranteCaseiro.h"
#include <iostream>
using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{

}
void RestauranteCaseiro::adicionaMesa(MesaDeRestaurante mesa)
{
    mesaDeRestaurante.push_back(mesa);
}
void RestauranteCaseiro::adicionaAoPedido(int numMesa,Pedido pedido)
{
    for(MesaDeRestaurante &m: mesaDeRestaurante)
    {
        if(numMesa == m.getNumMesa())
        {
            m.adicionaAoPedido(pedido);
        }
    }
}
float RestauranteCaseiro::calculaTotalRestaurante()
{
    float total =0;
    for(MesaDeRestaurante &m: mesaDeRestaurante)
    {
        total = total + m.calculaTotal();
    }
    return total;
}

void RestauranteCaseiro::toString()
{
    for(MesaDeRestaurante &m: mesaDeRestaurante)
    {
        m.toString();
    }
}


