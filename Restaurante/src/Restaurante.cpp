#include "Restaurante.h"
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include <iostream>

Restaurante::Restaurante()
{

}

void Restaurante::adicionarPedido(Pedido p, int indMesa)
{
    mesasRestaurante[indMesa].adicionarPedidos(p);
}

float Restaurante::calculaTotalRestaurante()
{
    float soma = 0;

    for(int i = 0; i < 10; i++)
    {
        soma = soma + mesasRestaurante[i].calculaTotal();
    }
    return soma;
}

MesaDeRestaurante Restaurante::getMesa(int indMesa)
{
    return mesasRestaurante[indMesa];
}

void Restaurante::exibeContaFinal(int indMesa)
{
    mesasRestaurante[indMesa].exibeConta();
}

int Restaurante::mesaExiste(int indMesa) // se tem mesa no endereço passado, retorna '1'; caso contrário, retorna '0'
{
    for(int i = 0; i < mesasRestaurante[indMesa].tamanhoVector(); i++)
    {
        //std::cout << "quantidade: " << mesasRestaurante[indMesa].getQuantidade() << std::endl;
        //if( mesasRestaurante[indMesa].calculaTotal() > 0 )
        if( mesasRestaurante[indMesa].calculaTotal() == 0 )
        {
            //std::cout << "retornou 0\n";
            return 0;
        }
        else
        {
            //std::cout << "retornou 1\n";
            return 1;
        }
    }
}
