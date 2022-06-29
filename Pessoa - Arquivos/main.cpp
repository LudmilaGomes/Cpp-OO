#include <iostream>
#include <fstream>
#include <string>
#include "Pessoa2.h"
#include "Endereco2.h"

using namespace std;

int main()
{
    int quantPessoas;
    Endereco2 endereco;
    fstream arquivo;

    cin >> quantPessoas;
    cin.ignore();

    Pessoa2 agendaContatos[quantPessoas];

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

        endereco = Endereco2(rua, numero, bairro, cidade, estado, cep);
        agendaContatos[i] = Pessoa2(nome, endereco, telefone);
    }

    arquivo.open("dadosPessoa.txt", fstream::out);
    if(!arquivo.is_open())
    {
        cout << "Erro ao abrir o arquivo.\n" << endl;
        return 34;
    }

    for(int i = 0; i < quantPessoas; i++)
    {
        agendaContatos[i].toString();

        //arquivo << agendaContatos[i].toString();

        //arquivo << agendaContatos[i].getNome() << " - " << agendaContatos[i].getEndereco() << agendaContatos[i].getTelefone() << endl;

        if(i != (quantPessoas - 1) )
            printf("\n");
    }

    return 0;
}
