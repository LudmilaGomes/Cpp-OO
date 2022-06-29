#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno : public Imovel
{
    public:
        Terreno();
        ~Terreno();

        void exibeAtributos();
        void lerAtributos();

    protected:

    private:
        float areaTer;
};

#endif // TERRENO_H
