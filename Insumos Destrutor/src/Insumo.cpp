#include "Insumo.h"
#include <iostream>
#include <string>

Insumo::Insumo()
{
    //ctor
}

Insumo::Insumo(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade, int valorUnitario, int tipoInsumo)
{
    this->nome = nome;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->tipoInsumo = tipoInsumo;
}

Insumo::~Insumo()
{
    std::cout << "Deletando Insumos" << std::endl;
    //delete
}
/*
void Insumo::setNome(std::string nome)
{
    this->nome = nome;
}

void Insumo::setDtVencimento(std::string dtVencimento)
{
    this->dtVencimento = dtVencimento;
}

void Insumo::setNomeFabricante(std::string nomeFabricante)
{
    this->nomeFabricante = nomeFabricante;
}

void Insumo::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

void Insumo::setValorUnitario(int valorUnitario)
{
    this->valorUnitario = valorUnitario;
}

void Insumo::setTipoInsumo(int tipoInsumo)
{
    this->tipoInsumo = tipoInsumo;
}

std::string Insumo::getNome();
{
    return nome;
}

std::string Insumo::getDtVencimento();
{
    return dtVencimento;
}

std::string Insumo::getNomeFabricante();
{
    return nomeFabricante;
}

int Insumo::getQuantidade();
{
    return quantidade;
}

int Insumo::getValorUnitario();
{
    return valorUnitario;
}

int Insumo::getTipoInsumo();
{
    return tipoInsumo;
}
*/
