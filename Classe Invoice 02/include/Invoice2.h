#ifndef INVOICE2_H
#define INVOICE2_H
#include <string>

class Invoice2
{
    public:
        Invoice2();
        Invoice2(int n, int q, std::string d, double p);

        void setNumero(int n);
        void setQuantidade(int q);
        void setDescricao(std::string d);
        void setPreco(double p);

        void print();

        int getNumero();
        int getQuantidade();
        std::string getDescricao();
        double getPreco();

        double getInvoiceAmount();

    private:
        int numero, quantidade;
        std::string descricao;
        double preco;
};

#endif // INVOICE2_H
