#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa : public Imovel
{
    public:
        Casa();

        void exibeAtributos();
        void lerAtributos();

    protected:

    private:
        int quantPavimentos, quantQuartos;
        float areaTerreno, areaConstruida;
};

#endif // CASA_H
