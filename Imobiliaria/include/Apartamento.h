#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();

        void exibeAtributos();
        void lerAtributos();

    protected:

    private:
        int quantQuartos, andar, quantVagas;
        float areaAp, valorCondominio;
};

#endif // APARTAMENTO_H
