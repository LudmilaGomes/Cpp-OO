#include "Pessoa2.h"
#include "Endereco2.h"
#include <iostream>

Pessoa2::Pessoa2()
{
    //ctor
}

Pessoa2::Pessoa2(std::string n)
{
    nome = n;
}

Pessoa2::Pessoa2(std::string n, Endereco2 en, std::string tel)
{
    nome = n;
    endereco = en;
    telefone = tel;
}

void Pessoa2::setEndereco(Endereco2 en)
{
    endereco = en;
}

void Pessoa2::setNome(std::string n)
{
    nome = n;
}

void Pessoa2::setTelefone(std::string tel)
{
    telefone = tel;
}

Endereco2 Pessoa2::getEndereco()
{
    return endereco;
}

std::string Pessoa2::getNome()
{
    return nome;
}

std::string Pessoa2::getTelefone()
{
    return telefone;
}

void Pessoa2::toString()
{
    // Caetano Veloso, (11) 98888-1111
    std::cout << nome << ", " << telefone << std::endl;
    endereco.toString();
}
