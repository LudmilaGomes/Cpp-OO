#include "SistemaGerenciaFolha.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"
#include <string>
#include <vector>

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMaximo)
{
    this->orcamento = orcamento;
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *funcionario)
{
    funcionarios.push_back(funcionario);
}

double SistemaGerenciaFolha::getCalculaTotalFolha()
{
    double totalFolha = 0;

    for(int i = 0; i < funcionarios.size(); i++)
    {
        totalFolha = totalFolha + (funcionarios[i]->calculaSalario());
    }

    return totalFolha;
}

double SistemaGerenciaFolha::calcularValorTotalFolha(double orcamento)
{
    OrcamentoEstouradoException orcamentoEstourado;

    double totalFolha = 0;

    for(int i = 0; i < funcionarios.size(); i++)
    {
        totalFolha = totalFolha + (funcionarios[i]->calculaSalario());
    }

    if(orcamento > totalFolha)
    {
        return totalFolha;
    }
    else
    {
        throw orcamentoEstourado.OrcamentoEstourado();
    }

    return 0;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome)
{
    FuncionarioNaoExisteException funcionarioNaoExiste;

    for(int i = 0; i < funcionarios.size(); i++)
    {
        if(funcionarios[i]->getNome() == nome)
        {
            return funcionarios[i]->calculaSalario();
        }
    }

    throw funcionarioNaoExiste.FuncionarioNaoExiste(nome);

    return 0;
}
