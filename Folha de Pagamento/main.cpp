#include <iostream>
#include <string>
#include "Funcionario.h"
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

using namespace std;

int main()
{
    int orcamento;
    SistemaGerenciaFolha gerenciaFolha;
    string nome, nome2, nome3;
    int matricula;
    double salario, salarioPorHora, horasTrabalhas, vendasMensais, percentualComissao;

    cin >> orcamento;

    cin.ignore();
    getline(cin, nome);
    cin >> matricula;
    cin >> salario;

    Funcionario *vet1 = new Assalariado(nome, matricula, salario);
    gerenciaFolha.setFuncionarios(vet1);

    cin.ignore();
    getline(cin, nome);
    cin >> matricula;
    cin >> salarioPorHora;
    cin >> horasTrabalhas;
    Funcionario *vet2 = new Horista(nome, matricula, salarioPorHora, horasTrabalhas);
    gerenciaFolha.setFuncionarios(vet2);

    cin.ignore();
    getline(cin, nome);
    cin >> matricula;
    cin >> vendasMensais;
    cin >> percentualComissao;
    Funcionario *vet3 = new Comissionado(nome, matricula, vendasMensais, percentualComissao);
    gerenciaFolha.setFuncionarios(vet3);

    cin.ignore();
    getline(cin,nome);
    getline(cin,nome2);
    getline(cin,nome3);

    int indicaExcecao = 0;
    try
    {
        cout << gerenciaFolha.consultaSalarioFuncionario(nome) << endl;
    }
    catch(string e)
    {
        cout << e << endl;
    }

    try
    {
        cout << gerenciaFolha.consultaSalarioFuncionario(nome2) << endl;
    }
    catch(string e)
    {
        cout << e << endl;
    }

    try
    {
        cout << gerenciaFolha.consultaSalarioFuncionario(nome3) << endl;
    }
    catch(string e)
    {
        cout << e << endl;
    }

    try
    {
        cout << gerenciaFolha.calcularValorTotalFolha(orcamento) << endl;
    }
    catch(string e)
    {
        cout << e;
        indicaExcecao = 1;
    }

    if(indicaExcecao)
    {
        cout << " " << gerenciaFolha.getCalculaTotalFolha() << endl;
    }

    return 0;
}
