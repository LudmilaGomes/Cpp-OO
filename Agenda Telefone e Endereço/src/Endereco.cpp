#include "Endereco.h"
#include <iostream>

Endereco::Endereco()
{
    //ctor
}

Endereco::Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string cep)
{
    rua = r;
    numero = n;
    bairro = b;
    cidade = c;
    estado = e;
    this->cep = cep;
}

void Endereco::toString()
{
    // Rua das Flores, 199, Lapa. Rio de Janeiro - Rio de Janeiro. CEP: 23595-180
    std::cout << rua << ", " << numero << ", " << bairro << ". " << cidade << " - " << estado << ". CEP: " << cep << std::endl;
}
