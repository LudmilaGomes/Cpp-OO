#ifndef ELEITOR_H
#define ELEITOR_H
#include <string>

class Eleitor
{
    public:
        Eleitor();
        Eleitor(std::string n, int i, std::string tit);

        std::string getNome();
        int getIdade();

    protected:

    private:
        std::string nome;
        int idade;
        std::string tituloEleitor;
};

#endif // ELEITOR_H
