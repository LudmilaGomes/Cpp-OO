#include "ControleDeGastos.h"
#include "Despesa.h"
#include <string>
#include <cstring>

ControleDeGastos::ControleDeGastos()
{
    //ctor
}

void ControleDeGastos::setDespesa(Despesa d, int pos)
{
    despesas[pos] = d;
}

Despesa ControleDeGastos::getDespesa(int pos)
{
    return despesas[pos];
}

float ControleDeGastos::calculaTotalDespesas()
{
    float soma = 0;

    for(int i = 0; i < 100; i++)
    {
        soma = soma + despesas[i].getValor();
    }
    return soma;
}

float ControleDeGastos::calculaTotalDespesas(std::string tipo)
{
    float soma = 0;

    for(int i = 0; i < 100; i++)
    {
        if( despesas[i].getTipoDeGasto() == tipo )
            soma = soma + despesas[i].getValor();
    }
    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tipo)
{
    for(int i = 0; i < 100; i++)
    {
        if( despesas[i].getTipoDeGasto() == tipo )
            return true;
        else
            return false;
    }
}
