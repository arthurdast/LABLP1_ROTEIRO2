#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#include "Pedido.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int numMesa,Pedido pedido);
        void adicionaMesa(MesaDeRestaurante mesa);
        float calculaTotalRestaurante();
        void toString();
    protected:

    private:
         std::vector<MesaDeRestaurante> mesaDeRestaurante;

};

#endif // RESTAURANTECASEIRO_H
