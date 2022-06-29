#include "Pedido.h"
#include <iostream>

Pedido::Pedido()
{
    //ctor
}

Pedido::Pedido(float valorUnitario, int quantidade)
{
    this->valorUnitario = valorUnitario;
    this->quantidade = quantidade;
}

Pedido::~Pedido()
{
    //dtor
}

float Pedido::getTotal()
{
    return (valorUnitario * quantidade);
}

void Pedido::toString()
{
    std::cout << "R$ " << valorUnitario << ", quant: " << quantidade << ", total: R$ " << getTotal() << std::endl;
}
