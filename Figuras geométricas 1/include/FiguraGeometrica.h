#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        FiguraGeometrica(int tipo);
        virtual float calculaArea() = 0;
        virtual void leAtributosArea() = 0;
        std::string getNome();

    protected:
        std::string nome;
        int tipo;
};

#endif // FIGURAGEOMETRICA_H
