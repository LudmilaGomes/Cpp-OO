#include "Consultor.h"
#include "Funcionario.h"

Consultor::Consultor()
{
    //ctor
}

double Consultor::getSalario()
{
    return salario + salario * 0.1;
}

double Consultor::getSalario(double porcentual)
{
    return salario + salario * porcentual;
}
