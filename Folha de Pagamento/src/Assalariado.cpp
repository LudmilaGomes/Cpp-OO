#include "Assalariado.h"
#include "Funcionario.h"
#include <string>

Assalariado::Assalariado()
{
    //ctor
}

Assalariado::Assalariado(std::string nome, int matricula, double salario)
 : Funcionario(nome, matricula)
{
    this->salario = salario;
}

Assalariado::~Assalariado()
{
    //dtor
}

double Assalariado::calculaSalario()
{
    return salario;
}
