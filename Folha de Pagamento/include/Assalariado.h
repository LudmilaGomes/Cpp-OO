#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Assalariado.h"
#include "Funcionario.h"
#include <string>

class Assalariado : public Funcionario
{
    public:
        Assalariado();
        Assalariado(std::string nome, int matricula, double salario);
        virtual ~Assalariado();

        double calculaSalario();

    protected:

    private:
        double salario;
};

#endif // ASSALARIADO_H
