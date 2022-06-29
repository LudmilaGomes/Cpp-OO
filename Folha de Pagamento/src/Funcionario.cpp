#include "Funcionario.h"
#include <string>

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::Funcionario(std::string nome, int matricula)
{
    setNome(nome);
    setMatricula(matricula);
}

Funcionario::~Funcionario()
{
    //dtor
}

void Funcionario::setNome(std::string nome)
{
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula)
{
    this->matricula = matricula;
}

std::string Funcionario::getNome()
{
    return nome;
}

int Funcionario::getMatricula()
{
    return matricula;
}
