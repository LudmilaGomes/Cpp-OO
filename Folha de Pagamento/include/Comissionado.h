#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"
#include <string>

class Comissionado : public Funcionario
{
    public:
        Comissionado();
        Comissionado(std::string nome, int matricula, double vendasSemanais, double percentualComissao);
        virtual ~Comissionado();

        double calculaSalario();

    protected:

    private:
        double vendasSemanais;
        double percentualComissao;
};

#endif // COMISSIONADO_H
