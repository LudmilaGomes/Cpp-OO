#include "Funcionario2.h"

Funcionario2::Funcionario2()
{
    //ctor
}

Funcionario2::Funcionario2(std::string n, std::string sn, int s)
{
    nome = n;
    sobrenome = sn;
    salario = s;
}

void Funcionario2::setNome(std::string n)
{
    nome = n;
}

void Funcionario2::setSobrenome(std::string sn)
{
    sobrenome = sn;
}

void Funcionario2::setSalario(int s)
{
    salario = s;
}

std::string Funcionario2::getNome()
{
    return nome;
}

std::string Funcionario2::getSobreome()
{
    return sobrenome;
}

int Funcionario2::getSalario()
{
    return salario;
}

double Funcionario2::getSalarioAnual()
{
    return salario * 12;
}

void Funcionario2::aumentoSalario(float porcentual)
{
    salario = salario + ( salario * porcentual );
}
