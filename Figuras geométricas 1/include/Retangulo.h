#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();
        float calculaArea();
        void leAtributosArea();
        //std::string getNome();

    protected:

    private:
        float base, altura;
};

#endif // RETANGULO_H
