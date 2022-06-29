#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <vector>
#include "Pedido.h"

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();

        Pedido getPedido(int posicao);

        void adicionarPedidos(Pedido p);
        void zeraPedidos();
        float calculaTotal();
        void exibeConta();
        int tamanhoVector();

    protected:

    private:
        std::vector <Pedido> todosOsPedidos;
};

#endif // MESADERESTAURANTE_H
