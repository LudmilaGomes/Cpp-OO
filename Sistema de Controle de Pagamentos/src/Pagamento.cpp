#include "Pagamento.h"

Pagamento::Pagamento()
{
    valorPagamento = 0;
}

void Pagamento::setValorPagamento(float vP)
{
    valorPagamento = vP;
}

void Pagamento::setNomeDoFuncionario(std::string n)
{
    nomeDoFuncionario = n;
}

float Pagamento::getValorPagamento()
{
    return valorPagamento;
}

std::string Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}
