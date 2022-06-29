#ifndef INSUMO_H
#define INSUMO_H
#include <string>

class Insumo
{
    public:
        Insumo();
        Insumo(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade, int valorUnitario, int tipoInsumo);
        virtual ~Insumo();

    protected:
        std::string nome, dtVencimento, nomeFabricante;
        int quantidade, valorUnitario, tipoInsumo;
};

#endif // INSUMO_H

/*


        void setNome(std::string nome);
        void setDtVencimento(std::string dtVencimento);
        void setNomeFabricante(std::string nomeFabricante);
        void setQuantidade(int quantidade);
        void setValorUnitario(int valorUnitario);
        void setTipoInsumo(int tipoInsumo);

        std::string getNome();
        std::string getDtVencimento();
        std::string getNomeFabricante();
        int getQuantidade();
        int getValorUnitario();
        int getTipoInsumo();

*/
