#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <string>

class FuncionarioNaoExisteException
{
    public:
        FuncionarioNaoExisteException();
        virtual ~FuncionarioNaoExisteException();

        std::string FuncionarioNaoExiste(std::string nome);

    protected:

    private:
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
