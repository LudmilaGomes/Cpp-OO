#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <string>

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(float valorPorHora);

        float calculaPagamentoSemanal(int horasSemanais);

    protected:
        float valorPorHora;
};

#endif // TRABALHADORPORHORA_H
