#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();

        float calculaPagamentoSemanal();

    protected:

    private:
};

#endif // TRABALHADORASSALARIADO_H
