#include "Insumo.h"
#include "Vacina.h"
#include <string>
#include <iostream>

Vacina::Vacina()
{
    //ctor
}

Vacina::Vacina(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade,
       int valorUnitario, int tipoInsumo, std::string tipoVacina, int quantDoses, int intervalo)
        : Insumo(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario,  1)
        {
            this->tipoVacina = tipoVacina;
            this->quantDoses = quantDoses;
            this->intervalo = intervalo;
        }


Vacina::~Vacina()
{
    std::cout << "Deletando Vacina" << std::endl;
}
