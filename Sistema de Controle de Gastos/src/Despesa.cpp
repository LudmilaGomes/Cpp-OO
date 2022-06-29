#include "Despesa.h"
#include <string>

Despesa::Despesa()
{
    valor = 0;
    //ctor
}

void Despesa::setNome(std::string n)
{
    nome = n;
}

void Despesa::setValor(float v)
{
    valor = v;
}

void Despesa::setTipoDeGasto(std::string t)
{
    tipoDeGasto = t;
}

std::string Despesa::getNome()
{
    return nome;
}

float Despesa::getValor()
{
    return valor;
}

std::string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}
