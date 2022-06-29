#include "Pedido.h"
#include <string>

Pedido::Pedido()
{

}

Pedido::Pedido(int n, std::string d, int q, float p)
{
    numero = n;
    descricao = d;
    quantidade = q;
    precoItem = p;
}

void Pedido::setQuantidade(int q)
{
    quantidade = q;
}

int Pedido::getNumero()
{
    return numero;
}

std::string Pedido::getDescricao()
{
    return descricao;
}

int Pedido::getQuantidade()
{
    return quantidade;
}

float Pedido::getPrecoItem()
{
    return precoItem;
}

float Pedido::getTotal()
{
    return quantidade * precoItem;
}
