#include "Pessoa.h"
#include "Endereco.h"
#include <iostream>

Pessoa::Pessoa()
{
    //ctor
}

Pessoa::Pessoa(std::string n)
{
    nome = n;
}

Pessoa::Pessoa(std::string n, Endereco en, std::string tel)
{
    nome = n;
    endereco = en;
    telefone = tel;
}

void Pessoa::setEndereco(Endereco en)
{
    endereco = en;
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}

void Pessoa::setTelefone(std::string tel)
{
    telefone = tel;
}

Endereco Pessoa::getEndereco()
{
    return endereco;
}

std::string Pessoa::getNome()
{
    return nome;
}

std::string Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::toString()
{
    // Caetano Veloso, (11) 98888-1111
    std::cout << nome << ", " << telefone << std::endl;
    endereco.toString();
}
