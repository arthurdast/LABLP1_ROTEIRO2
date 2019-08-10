#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <iostream>
#include <vector>
#include "Pedido.h"


class MesaDeRestaurante
{
    public:
        MesaDeRestaurante(int numMesa);
        void adicionaAoPedido(Pedido pedido);
        void zeraPedidos();
        float calculaTotal();
        void toString();
        int getNumMesa();
    protected:

    private:
         std::vector<Pedido> pedidos;
        int numMesa;
};

#endif // MESADERESTAURANTE_H
