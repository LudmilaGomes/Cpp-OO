#include "GerenciadorEleitores.h"
#include <iostream>
#include <stdexcept>
#include <exception>
#include <string>

GerenciadorEleitores::GerenciadorEleitores()
{
    //ctor
}

void GerenciadorEleitores::cadastrarEleitor(std::string nome, int idade, std::string titulo, int pos)
{
    eleitores[pos] = Eleitor(nome, idade, titulo);
}

void GerenciadorEleitores::verificaMenoridade(int pos)
{
    //std::string mensagem = ("Eleitor " + eleitores[pos].getNome + " não pode ser cadastrado");
    if(eleitores[pos].getIdade() < 16)
    {
        throw std::underflow_error( "Eleitor " + eleitores[pos].getNome() + " não pode ser cadastrado" );
    }
}

void GerenciadorEleitores::verificaPendenciaIdade(int pos)
{
    //std::string mensagem = ("Eleitor " + eleitores[pos].getNome + " com pendência");
    if(eleitores[pos].getIdade() > 20)
    {
        throw std::overflow_error( "Eleitor " + eleitores[pos].getNome() + " com pendência" );
    }
}

void GerenciadorEleitores::verificaEleitor(int posicaoFinal)
{

    for(int i = 0; i < posicaoFinal; i++)
    {
        try
        {
            verificaMenoridade(i);
            verificaPendenciaIdade(i);
        }

        catch(const std::underflow_error e)
        {
            std::cout << e.what() << std::endl;
        }

        catch(const std::overflow_error e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}
