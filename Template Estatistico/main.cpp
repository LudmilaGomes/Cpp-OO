#include <iostream>
#include <string>
#include "Livro.h"
#include "Pedido.h"
#include "Estatisticas.h"
#include <vector>

using namespace std;

int main()
{
    int n, i;
    vector <Pedido> pedidos;
    vector <Livro> livros;
    Estatisticas <Pedido> estatsPedido;
    Estatisticas <Livro> estatsLivro;

    cin >> n;

    for(int i = 0; i < n; i++) // ler livros
    {
        float valorUnitario;
        int quantidade;

        cin >> valorUnitario;
        cin >> quantidade;

        pedidos.push_back(Pedido(valorUnitario, quantidade));
    }

    cin >> n;

    for(int i = 0; i < n; i++) // ler pedidos
    {
        string titulo;
        int quantPaginas;

        cin.ignore();
        getline(cin, titulo);
        cin >> quantPaginas;

        livros.push_back(Livro(titulo, quantPaginas));
    }

    cout << "Maior: ";
    i = estatsPedido.indexOfMaior(pedidos);
    pedidos[i].toString();
    cout << "Menor: ";
    i = estatsPedido.indexOfMenor(pedidos);
    pedidos[i].toString();
    cout << "Média: " << estatsPedido.media(pedidos) << endl;

    cout << "Maior: ";
    i = estatsLivro.indexOfMaior(livros);
    livros[i].toString();
    cout << "Menor: ";
    i = estatsLivro.indexOfMenor(livros);
    livros[i].toString();
    cout << "Média: " << estatsLivro.media(livros) << endl;

    return 0;
}
