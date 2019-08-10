#include <iostream>
#include <iostream>
#include <vector>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
using namespace std;


int main()
{
    Pedido  p1(1,1,"",5);
    Pedido  p2(2,1,"",1);
    Pedido  p3(3,1,"",2);
    Pedido  p4(1,4,"",5);

    MesaDeRestaurante m1(1);

    m1.adicionaAoPedido(p1);
    m1.adicionaAoPedido(p2);
    m1.adicionaAoPedido(p3);
    m1.adicionaAoPedido(p4);


    MesaDeRestaurante m2(2);

    m2.adicionaAoPedido(p1);
    m2.adicionaAoPedido(p2);
    m2.adicionaAoPedido(p4);

    MesaDeRestaurante m3(3);

    m3.adicionaAoPedido(p1);
    m3.adicionaAoPedido(p3);


    RestauranteCaseiro r;
    r.adicionaMesa(m1);
    r.adicionaMesa(m2);
    r.adicionaMesa(m3);

    r.toString();


    cout<<"\n Total m1: "<<m1.calculaTotal();
    cout<<"\n Total m2: "<<m2.calculaTotal();
    cout<<"\n Total m3: "<<m3.calculaTotal();

    cout<<"\n Total do Restaurante: "<<r.calculaTotalRestaurante();

    cout<<"\n\n Zerando m2";
    m2.zeraPedidos();
    cout<<"\n Total m2: "<<m2.calculaTotal();

}
