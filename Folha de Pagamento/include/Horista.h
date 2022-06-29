#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"
#include <string>

class Horista : public Funcionario
{
    public:
        Horista();
        Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas);
        virtual ~Horista();

        double calculaSalario();

    protected:

    private:
        double salarioPorHora;
        double horasTrabalhadas;
};

#endif // HORISTA_H
