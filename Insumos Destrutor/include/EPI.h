#ifndef EPI_H
#define EPI_H
#include "Insumo.h"
#include <string>

class EPI : public Insumo
{
    public:
        EPI();
        EPI(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade,
            int valorUnitario, int tipoInsumo, std::string tipoEPI, std::string descricao);
        virtual ~EPI();

    protected:

    private:
        std::string descricao, tipoEPI;
};

#endif // EPI_H
