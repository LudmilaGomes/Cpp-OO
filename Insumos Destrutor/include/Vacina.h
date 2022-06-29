#ifndef VACINA_H
#define VACINA_H
#include "Insumo.h"
#include <string>

class Vacina : public Insumo
{
    public:
        Vacina();
        Vacina(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade, int valorUnitario, int tipoInsumo, std::string tipoVacina, int quantDoses, int intervalo);
        virtual ~Vacina();

    protected:

    private:
        std::string tipoVacina;
        int quantDoses, intervalo;
};

#endif // VACINA_H
