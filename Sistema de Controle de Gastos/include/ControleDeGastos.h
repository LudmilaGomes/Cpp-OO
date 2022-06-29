#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <string>

class ControleDeGastos : public Despesa
{
    public:
        ControleDeGastos();

        void setDespesa(Despesa d, int pos);
        Despesa getDespesa(int pos);

        float calculaTotalDespesas();
        float calculaTotalDespesas(std::string tipo);
        bool existeDespesaDoTipo(std::string tipo);

    private:
        Despesa despesas[100];
};

#endif // CONTROLEDEGASTOS_H
