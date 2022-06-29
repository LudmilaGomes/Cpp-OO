#include "ControleDePagamentos.h"
#include <string>

ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

void ControleDePagamentos::setPagamento(Pagamento p, int endereco)
{
    pagamentos[endereco] = p;
}

Pagamento ControleDePagamentos::getPagamento(int endereco)
{
    return pagamentos[endereco];
}

float ControleDePagamentos::calculaTotalDePagamentos()
{
    float soma = 0;

    for(int i = 0; i < 10; i++)
    {
        soma = soma + pagamentos[i].getValorPagamento();
    }
    return soma;
}

int ControleDePagamentos::getEnderecoFuncionario(std::string nomeFuncionario)
{
    for(int i = 0; i < 10; i++)
    {
        if( pagamentos[i].getNomeDoFuncionario() == nomeFuncionario )
            return i;
        else
            return -1;
    }
}
