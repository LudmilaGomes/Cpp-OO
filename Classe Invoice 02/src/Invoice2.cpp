#include "Invoice2.h"
#include <iostream>

Invoice2::Invoice2()
{
    //ctor
}

Invoice2::Invoice2(int n, int q, std::string d, double p)
{
    numero = n;
    quantidade = q;
    descricao = d;
    preco = p;

    if(quantidade < 0)
    {
        quantidade = 0;
    }

    if(preco < 0)
    {
        preco = 0;
    }
}

void Invoice2::setNumero(int n)
{
    numero = n;
}

void Invoice2::setQuantidade(int q)
{
    quantidade = q;
}

void Invoice2::setDescricao(std::string d)
{
    descricao = d;
}

void Invoice2::setPreco(double p)
{
    preco = p;
}

void Invoice2::print()
{
    //100 - Teclado USB - 2 - 143.9 - 287.8
    std::cout << numero << " - " << descricao << " - " << quantidade << " - " << preco << " - " << getInvoiceAmount() << std::endl;
}

int Invoice2::getNumero()
{
    return numero;
}

int Invoice2::getQuantidade()
{
    return quantidade;
}

std::string Invoice2::getDescricao()
{
    return descricao;
}

double Invoice2::getPreco()
{
    return preco;
}

double Invoice2::getInvoiceAmount()
{
    return quantidade * preco;
}
