#ifndef PEDIDO_H
#define PEDIDO_H


class Pedido
{
    public:
        Pedido();
        Pedido(float valorUnitario, int quantidade);
        virtual ~Pedido();

        float getTotal();
        void toString();

    protected:

    private:
        float valorUnitario;
        int quantidade;
};

#endif // PEDIDO_H
