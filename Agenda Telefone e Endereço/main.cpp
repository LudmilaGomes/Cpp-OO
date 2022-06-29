#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Endereco.h"

using namespace std;

int main()
{
    int quantPessoas;
    Endereco endereco;

    cin >> quantPessoas;
    cin.ignore();

    Pessoa agendaContatos[quantPessoas];

    for(int i = 0; i < quantPessoas; i++)
    {
        string nome;
        string telefone;

        getline(cin, nome);
        getline(cin, telefone);

        string rua;
        int numero;
        string bairro;
        string cidade;
        string estado;
        string cep;

        getline(cin, rua);
        cin >> numero;
        cin.ignore();
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);

        endereco = Endereco(rua, numero, bairro, cidade, estado, cep);
        agendaContatos[i] = Pessoa(nome, endereco, telefone);
    }

    for(int i = 0; i < quantPessoas; i++)
    {
        agendaContatos[i].toString();

        if(i != (quantPessoas - 1) )
            printf("\n");
    }

    return 0;
}

/*

QUAL ERA O ERRO?

 - Eu havia definido o método toString como tendo retorno do tipo std::string;
 mas esse método NÃO TEM RETORNO (é do tipo void), pois usa o cout.

*/
