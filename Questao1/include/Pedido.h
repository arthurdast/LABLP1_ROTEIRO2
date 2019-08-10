#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <vector>


class Pedido
{
    public:
        Pedido();
        Pedido(int num,int qtd,std::string desc,float preco);
        void setQtd(int qtd);
        int getNum();
        int getQtd();
        float getPreco();
        std::string getDesc();

    protected:

    private:
        int num;
        int qtd;
        std::string desc;
        float preco;

};

#endif // PEDIDO_H
