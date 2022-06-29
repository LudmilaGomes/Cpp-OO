#include "Insumo.h"
#include "EPI.h"
#include <string>
#include <iostream>

EPI::EPI()
{
    //ctor
}

EPI::EPI(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade,
    int valorUnitario, int tipoInsumo, std::string tipoEPI, std::string descricao)
    : Insumo(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario, 3)
    {
        this->tipoEPI = tipoEPI;
        this->descricao = descricao;
    }

EPI::~EPI()
{
    std::cout << "Deletando EPI\n";
}
