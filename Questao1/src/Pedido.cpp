#include "Pedido.h"
#include <iostream>
using namespace std;

Pedido::Pedido()
{
    //ctor
}
Pedido::Pedido(int num,int qtd,std::string desc,float preco)
{
    this->num = num;
    this->qtd = qtd;
    this->desc = desc;
    this->preco = preco;
}
void Pedido::setQtd(int qtd){
    this->qtd = qtd;
}

int Pedido::getQtd()
{
    return this->qtd;
}
int Pedido::getNum()
{
    return this->num;
}
float Pedido::getPreco()
{
    return this->preco;
}
string Pedido::getDesc()
{
    return this->desc;
}
