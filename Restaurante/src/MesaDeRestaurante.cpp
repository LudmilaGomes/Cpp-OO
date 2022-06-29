#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <vector>
#include <iostream>

MesaDeRestaurante::MesaDeRestaurante()
{

}

Pedido MesaDeRestaurante::getPedido(int posicao)
{
    return todosOsPedidos[posicao];
}

void MesaDeRestaurante::adicionarPedidos(Pedido p)
{
    int indicaSePedidoExiste = 0;

    for(int i = 0; i < todosOsPedidos.size(); i++)
    {
        if( todosOsPedidos[i].getNumero() == p.getNumero() && todosOsPedidos[i].getDescricao() == p.getDescricao() && todosOsPedidos[i].getQuantidade() == p.getQuantidade() && todosOsPedidos[i].getPrecoItem() == p.getPrecoItem() )
        {
            todosOsPedidos[i].setQuantidade(todosOsPedidos[i].getQuantidade() * 2);
            indicaSePedidoExiste = 1;
        }
    }

    if(indicaSePedidoExiste == 0) // pedido não existe e deve ser adicionado à lista
    {
        todosOsPedidos.push_back(p);
    }
}

void MesaDeRestaurante::zeraPedidos()
{
    for(int i = 0; i < todosOsPedidos.size(); i++)
    {
        todosOsPedidos[i].setQuantidade(0);
    }
}

float MesaDeRestaurante::calculaTotal()
{
    float soma = 0;

    for(int i = 0; i < todosOsPedidos.size(); i++)
    {
        soma = soma + todosOsPedidos[i].getTotal();
    }
    return soma;
}

void MesaDeRestaurante::exibeConta()
{
    for(int i = 0; i < todosOsPedidos.size(); i++)
    {
        std::cout << todosOsPedidos[i].getNumero() << " - " << todosOsPedidos[i].getDescricao() << " - " << todosOsPedidos[i].getQuantidade() << " - " << todosOsPedidos[i].getPrecoItem() << " - R$ "  << todosOsPedidos[i].getTotal() << std::endl;
    }
    std::cout << "Total: R$ " << calculaTotal() << std::endl;
}

int MesaDeRestaurante::tamanhoVector()
{
    return todosOsPedidos.size();
}
