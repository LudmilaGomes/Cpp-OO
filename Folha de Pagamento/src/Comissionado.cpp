#include "Comissionado.h"
#include "Funcionario.h"
#include <string>

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::Comissionado(std::string nome, int matricula, double vendasSemanais, double percentualComissao)
 : Funcionario(nome, matricula)
{
    this->vendasSemanais = vendasSemanais;
    this->percentualComissao = percentualComissao;
}

Comissionado::~Comissionado()
{
    //dtor
}

double Comissionado::calculaSalario()
{
    return vendasSemanais * percentualComissao;
}
