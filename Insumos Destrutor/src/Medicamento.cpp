#include "Insumo.h"
#include "Medicamento.h"
#include <string>
#include <iostream>

Medicamento::Medicamento()
{
    //ctor
}

Medicamento::Medicamento(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade,
        int valorUnitario, int tipoInsumo, std::string dosagem, std::string administracao, std::string disponibilizacao)
        : Insumo(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario,  2)
        {
            this->dosagem = dosagem;
            this->administracao = administracao;
            this->disponibilizacao = disponibilizacao;
        }

Medicamento::~Medicamento()
{
    std::cout << "Deletando Medicamento" << std::endl;
}
