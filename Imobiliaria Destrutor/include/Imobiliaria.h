#ifndef IMOBILIARIA_H
#define IMOBILIARIA_H
#include <vector>
#include "Imovel.h"

class Imobiliaria
{
    public:
        Imobiliaria();
        virtual ~Imobiliaria();

        void addImovel(Imovel *imovel);
        void buscaImovel(std::string busca);
        void exibeImoveis();

    protected:

    private:
        std::vector <Imovel*> imoveis;
};

#endif // IMOBILIARIA_H
