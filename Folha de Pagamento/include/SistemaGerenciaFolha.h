#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include <vector>
#include <string>

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        SistemaGerenciaFolha(double orcamentoMaximo);
        virtual ~SistemaGerenciaFolha();


        void setFuncionarios(Funcionario *funcionario);

        double getCalculaTotalFolha();

        double calcularValorTotalFolha(double orcamento);
        double consultaSalarioFuncionario(std::string nome);

    protected:

    private:
        std::vector <Funcionario*> funcionarios;
        double orcamento;
};

#endif // SISTEMAGERENCIAFOLHA_H
