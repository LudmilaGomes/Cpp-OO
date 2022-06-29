#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include <vector>

class Restaurante
{
    public:
        Restaurante();

        void adicionarPedido(Pedido p, int indMesa);
        float calculaTotalRestaurante();
        MesaDeRestaurante getMesa(int indMesa);

        void exibeContaFinal(int indMesa);
        int mesaExiste(int indMesa);

    protected:

    private:
        MesaDeRestaurante mesasRestaurante[10];
};

#endif // RESTAURANTE_H
