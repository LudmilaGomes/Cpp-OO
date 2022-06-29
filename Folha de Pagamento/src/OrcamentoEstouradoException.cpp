#include "OrcamentoEstouradoException.h"
#include <string>

OrcamentoEstouradoException::OrcamentoEstouradoException()
{
    //ctor
}

OrcamentoEstouradoException::~OrcamentoEstouradoException()
{
    //dtor
}

std::string OrcamentoEstouradoException::OrcamentoEstourado()
{
    std::string resposta;

    resposta = "OrcamentoEstouradoException";
    return resposta;
}
