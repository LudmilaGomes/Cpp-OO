#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    public:
        Pedido();
        Pedido(int n, std::string d, int q, float p);

        void setQuantidade(int q);

        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        float getPrecoItem();
        float getTotal();

    protected:

    private:
        int numero;
        std::string descricao;
        int quantidade;
        float precoItem;
};

#endif // PEDIDO_H
