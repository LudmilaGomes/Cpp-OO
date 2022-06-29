#include "FuncionarioNaoExisteException.h"
#include <string>

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    //ctor
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException()
{
    //dtor
}

std::string FuncionarioNaoExisteException::FuncionarioNaoExiste(std::string nome)
{
    std::string resposta;

    resposta = "FuncionarioNaoExisteException " + nome;
    return resposta;
}
