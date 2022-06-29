#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#include <string>
#include "Insumo.h"

class Medicamento : public Insumo
{
    public:
        Medicamento();
        Medicamento(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade,
                    int valorUnitario, int tipoInsumo, std::string dosagem, std::string administracao, std::string disponibilizacao);
        virtual ~Medicamento();

    protected:

    private:
        std::string dosagem, administracao, disponibilizacao;
};

#endif // MEDICAMENTO_H
