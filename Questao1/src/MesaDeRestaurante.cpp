#include "MesaDeRestaurante.h"
#include <iostream>
using namespace std;

MesaDeRestaurante::MesaDeRestaurante(int numMesa)
{
    this->numMesa = numMesa;
}

int MesaDeRestaurante::getNumMesa()
{
    return numMesa;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido pedido)
{
    for(auto &p: pedidos)
        {
            if(pedido.getNum() == p.getNum())
            {
                p.setQtd(p.getNum() + pedido.getQtd());
                return;
            }
        }
    pedidos.push_back(pedido);
    return;
}

void MesaDeRestaurante::zeraPedidos()
{
    for(auto &p: pedidos)
        {
                p.setQtd(0);
        }
}

float MesaDeRestaurante::calculaTotal()
{
    float total =0;

    for(auto &p: pedidos)
        {
          total = total + (p.getQtd() * p.getPreco());
        }
    return total;
}

void MesaDeRestaurante::toString()
{
    cout<< "\n Mesa : " << numMesa;
    for(auto &p: pedidos)
    {
        cout<<"\n NUM: "<< p.getNum()<<" Qtd: "<< p.getQtd()<<" Valor: "<< p.getPreco();
    }

    cout<< "\n \n" ;
}
