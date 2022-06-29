#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        float calculaArea();
        void leAtributosArea();
        //std::string getNome();

    protected:

    private:
        float base, altura;
};

#endif // TRIANGULO_H
