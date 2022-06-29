#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(std::string nome, int numero, double salario);

        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
