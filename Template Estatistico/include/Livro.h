#ifndef LIVRO_H
#define LIVRO_H
#include <string>

class Livro
{
    public:
        Livro();
        Livro(std::string titulo, int totalPaginas);
        virtual ~Livro();

        int getTotal();
        void toString();

    protected:

    private:
        std::string titulo;
        int totalPaginas;
};

#endif // LIVRO_H
