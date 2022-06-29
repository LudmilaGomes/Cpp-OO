#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::ContaEspecial(std::string nome, int numero, double salario)
{
    nomeCliente = nome;
    numeroConta = numero;
    salarioMensal = salario;

    saldo = 0;
    definirLimite();
}

void ContaEspecial::definirLimite()
{
    limite = 3 * salarioMensal;
}
