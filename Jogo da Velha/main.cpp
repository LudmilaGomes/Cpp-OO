#include <iostream>
#include <locale>
#include "JogoVelha.h"

using namespace std;

int main()
{
    // vari�veis e objetos utilizados
    setlocale (LC_ALL, "");
    int jogarNovamente, opcaoJogo;
    JogoVelha j;

    while(1)
    {
        cout << "Op��es de jogo:\n";
        cout << " 1 - Jogador VS Jogador\n";
        cout << " 2 - Jogador VS Computador\n";

        cout << "\nDigite a op��o que voc� deseja:\n";
        cout << " >>> ";
        cin >> opcaoJogo;

        while(opcaoJogo != 1 && opcaoJogo != 2)
        {
            cout << "Op��o inv�lida.\n";
            cout << "Digite a op��o que voc� deseja:\n";
            cout << " >>> ";
            cin >> opcaoJogo;
        }

        if(opcaoJogo == 1)
        {
            j.inicia();
            j.realizaJogadas();
        }

        if(opcaoJogo == 2)
        {
            j.inicia();
            j.realizaJogadasComputador();
        }

        // fim de jogo:
        do
        {
            cout << "Deseja jogar novamente? Digite 1 para \'sim\' // 0 para \'n�o\'" << endl;
            cout << " >>> ";
            cin >> jogarNovamente;
            if(jogarNovamente == 1)
            {
                cout << "\nVamos jogar de novo!\n\n";
            }
            else if(jogarNovamente == 0)
            {
                cout << "\nSaindo do programa...\n";
            }
            else
            {
                cout << "Numero digitado inv�lido.\n";
            }

        } while( jogarNovamente != 0 && jogarNovamente != 1 );

        if(jogarNovamente == 0)
        {
            break;
        }
    }
}
