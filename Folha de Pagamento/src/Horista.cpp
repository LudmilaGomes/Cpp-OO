#include "Horista.h"
#include "Funcionario.h"

Horista::Horista()
{
    //ctor
}

Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas)
 : Funcionario(nome, matricula)
{
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

Horista::~Horista()
{
    //dtor
}

double Horista::calculaSalario()
{
    double salario;

    if(horasTrabalhadas > 40)
    {
        salario = salarioPorHora * 40;
        salario = salario + (salarioPorHora * (horasTrabalhadas - 40) * 1.5);
    }
    else
        salario = salarioPorHora * horasTrabalhadas;

    return salario * 4;
}
