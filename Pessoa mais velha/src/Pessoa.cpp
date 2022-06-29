#include "Pessoa.h"
#include <iostream>

Pessoa::Pessoa()
{
    //ctor
}

Pessoa::Pessoa(std::string nome, int idade)
{
    setNome(nome);
    setIdade(idade);
}

Pessoa::~Pessoa()
{
    //dtor
}

void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

std::string Pessoa::getNome()
{
    return nome;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::toString()
{
    std::cout << "Nome:  " << getNome() << std::endl;
    std::cout << "Idade: " << getIdade() << std::endl;
}
