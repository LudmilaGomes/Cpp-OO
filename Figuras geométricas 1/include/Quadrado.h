#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        float calculaArea();
        void leAtributosArea();
        //std::string getNome();

    protected:

    private:
        float lado;
};

#endif // QUADRADO_H
