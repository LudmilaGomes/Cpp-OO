#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        float calculaArea();
        void leAtributosArea();
        //std::string getNome();

    protected:

    private:
        float raio;
};

#endif // CIRCULO_H
