#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos
{
    public:
        ControleDePagamentos();

        void setPagamento(Pagamento p, int endereco);
        Pagamento getPagamento(int endereco);
        float calculaTotalDePagamentos();
        int getEnderecoFuncionario(std::string nomeFuncionario);

    private:
        Pagamento pagamentos[10];
};

#endif // CONTROLEDEPAGAMENTOS_H
