#include "Funcionario.h"
#include <string>

Funcionario::Funcionario()
{
    //ctor
}

void Funcionario::setMatricula(int m)
{
    matricula = m;
}

void Funcionario::setNome(std::string n)
{
    nome = n;
}

void Funcionario::setSalario(double s)
{
    salario = s;
}

int Funcionario::getMatricula()
{
    return matricula;
}

std::string Funcionario::getNome()
{
    return nome;
}

double Funcionario::getSalario()
{
    return salario;
}
