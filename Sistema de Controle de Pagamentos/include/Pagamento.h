#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{
    public:
        Pagamento();

        void setValorPagamento(float vP);
        void setNomeDoFuncionario(std::string n);

        float getValorPagamento();
        std::string getNomeDoFuncionario();

    protected:

    private:
        float valorPagamento;
        std::string nomeDoFuncionario;

};

#endif // PAGAMENTO_H
