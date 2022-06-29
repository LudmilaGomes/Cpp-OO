#ifndef GERENCIADORELEITORES_H
#define GERENCIADORELEITORES_H
#include "Eleitor.h"
#include <string>

class GerenciadorEleitores// : public Eleitor
{
    public:
        GerenciadorEleitores();
        Eleitor eleitores[30];

        void cadastrarEleitor(std::string nome, int idade, std::string titulo, int pos);
        void verificaEleitor(int pos);

    private:
        void verificaMenoridade(int pos);
        void verificaPendenciaIdade(int pos);
};

#endif // GERENCIADORELEITORES_H
