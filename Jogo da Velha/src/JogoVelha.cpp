#include "JogoVelha.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

JogoVelha::JogoVelha()
{
    // o construtor inicializa a vari�vel 'cont' sempre com o valor 1
    contQualJogador = 0;
}

JogoVelha::~JogoVelha()
{
    //dtor
}

void JogoVelha::inicia()
{
    contQualJogador = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            jogo[i][j] = 0;
        }
    }
}

void JogoVelha::exibeTabuleiro()
{
    /*  VERIFICA SE O M�TODO 'inicia()' EST� FUNCIONANDO:

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << jogo[i][j] << endl;
        }
    }

    O VALOR '0' � IMPRESSO NA TELA NOVE VEZES. EST� CORRETO.
    */

    cout << endl;
    cout << " ";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printBloco(i, j);
            if(j == 0 || j == 1)
                cout << " | ";
            else
                cout << " " << endl;

        }
        if(i == 0 || i == 1)
        {
            cout << "--- --- ---" << endl;
            cout << " ";
        }
        else
            cout << endl;
    }
}

void JogoVelha::printBloco(int l, int c) // l - linha; c - coluna
{
    if(jogo[l][c] == 0)
    {
        cout << " ";
    }
    if(jogo[l][c] == 1)
    {
        cout << "X";
    }
    if(jogo[l][c] == -1)
    {
        cout << "O";
    }
}

void JogoVelha::realizaJogadas()
{
    // se 'cont' % 2 == 0, ou seja, se 'cont' � par, � a vez do jogador 1 (jogador do X)
    // se 'cont' % 2 != 0, ou seja, se 'cont' � �mpar, � a vez do jogador 2 (jogador do O)

    while(contQualJogador < 9) // quando todas as casas forem preenchidas, ou seja, quando 'contQualJogador == 8' (pois 'contQualJogador' vai de 0 a 8)
    {
        if(contQualJogador % 2 == 0) // jogador 1
        {
            cout << "\nVez do jogador 1:\n";
            cout << "Digite, respectivamente, a linha e coluna em que deseja colocar o 'X':\n";
        }
        else                        // jogador 2
        {
            cout << "Vez do jogador 2:\n";
            cout << "Digite, respectivamente, a linha e coluna em que deseja colocar o 'O':\n";
        }

        cout << " >>> ";
        cin >> linha;
        cout << " >>> ";
        cin >> coluna;

        while( (linha != 1 && linha != 2 && linha != 3) || (coluna != 1 && coluna != 2 && coluna != 3) )
        {
            cout << "Voc� digitou valores inv�lidos para a linha ou coluna. Digite novamente.\n";
            cout << "Digite, respectivamente, a linha e coluna:" << endl;
            cout << " >>> ";
            cin >> linha;
            cout << " >>> ";
            cin >> coluna;
        }

        if( jogo[linha - 1][coluna - 1] != 0 ) // � preciso que aquela posi��o ainda n�o tenha sido escolhida antes
        {
            cout << "Voc� digitou uma posi��o que j� foi escolhida anteriormente." << endl;
            do
            {
                cout << "Digite, respectivamente, a linha e coluna:" << endl;
                cout << " >>> ";
                cin >> linha;
                cout << " >>> ";
                cin >> coluna;

            } while(jogo[linha - 1][coluna - 1] != 0);
        }

        if(contQualJogador % 2 == 0) // jogador 1
        {
            jogo[linha - 1][coluna - 1] = 1;
        }
        else                        // jogador 2
        {
            jogo[linha - 1][coluna - 1] = -1;
        }

        exibeTabuleiro();

        if(checaVencedor() == 1)
        {
            cout << "O jogador 1 venceu esta partida! Parab�ns!\n";
            break;

        }
        if(checaVencedor() == -1)
        {
            cout << "O jogador 2 venceu esta partida! Parab�ns!\n";
            break;
        }
        if(contQualJogador == 8)
        {
            if(checaVencedor() == 1)
            {
                cout << "O jogador 1 venceu esta partida! Parab�ns!\n";

            }
            if(checaVencedor() == -1)
            {
                cout << "O jogador 2 venceu esta partida! Parab�ns!\n";
            }
            if(checaVencedor() == 0)
                cout << "Ningu�m venceu a partida! Empate!\n";
        }

        contQualJogador++;
    }
}

int JogoVelha::checaVencedor()
{
    int somaLinha1 = 0, somaLinha2 = 0, somaLinha3 = 0;     // h� tr�s linhas
    int somaColuna1 = 0, somaColuna2 = 0, somaColuna3 = 0;  // h� tr�s colunas
    int somaDiagonal1 = 0, somaDiagonal2 = 0;               // h� duas diagonais

    somaLinha1 = jogo[0][0] + jogo[0][1] + jogo[0][2];
    somaLinha2 = jogo[1][0] + jogo[1][1] + jogo[1][2];
    somaLinha3 = jogo[2][0] + jogo[2][1] + jogo[2][2];

    somaColuna1 = jogo[0][0] + jogo[1][0] + jogo[2][0];
    somaColuna2 = jogo[0][1] + jogo[1][1] + jogo[2][1];
    somaColuna3 = jogo[0][2] + jogo[1][2] + jogo[2][2];

    somaDiagonal1 = jogo[0][0] + jogo[1][1] + jogo[2][2];
    somaDiagonal2 = jogo[0][2] + jogo[1][1] + jogo[2][0];

    // se a soma numa linha, por exemplo, � igual a 3, significa que o jogador 1 venceu, pois h� numa linha tr�s X seguidos.
    if( somaLinha1 == 3 || somaLinha2 == 3 || somaLinha3 == 3 || somaColuna1 == 3 || somaColuna2 == 3 || somaColuna3 == 3 || somaDiagonal1 == 3 || somaDiagonal2 == 3 )
    {
        return 1;
    }
    // se a soma numa linha, por exemplo, � igual a -3, significa que o jogador 2 venceu, pois h� numa linha tr�s O seguidos.
    else if( somaLinha1 == -3 || somaLinha2 == -3 || somaLinha3 == 3 || somaColuna1 == -3 || somaColuna2 == -3 || somaColuna3 == -3 || somaDiagonal1 == -3 || somaDiagonal2 == -3 )
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void JogoVelha::realizaJogadasComputador()
{
    while(contQualJogador < 9) // quando todas as casas forem preenchidas, ou seja, quando 'contQualJogador == 8' (pois 'contQualJogador' vai de 0 a 8)
    {
        if(contQualJogador % 2 == 0) // jogador 1
        {
            cout << "\nVez do jogador 1:\n";
            cout << "Digite, respectivamente, a linha e coluna em que deseja colocar o 'X':\n";

            cout << " >>> ";
            cin >> linha;
            cout << " >>> ";
            cin >> coluna;

            while( (linha != 1 && linha != 2 && linha != 3) || (coluna != 1 && coluna != 2 && coluna != 3) )
            {
                cout << "Voc� digitou valores inv�lidos para a linha ou coluna. Digite novamente.\n";
                cout << "Digite, respectivamente, a linha e coluna:" << endl;
                cout << " >>> ";
                cin >> linha;
                cout << " >>> ";
                cin >> coluna;
            }

            if( jogo[linha - 1][coluna - 1] != 0 ) // � preciso que aquela posi��o ainda n�o tenha sido escolhida antes
            {
                cout << "Voc� digitou uma posi��o que j� foi escolhida anteriormente." << endl;
                do
                {
                    cout << "Digite, respectivamente, a linha e coluna:" << endl;
                    cout << " >>> ";
                    cin >> linha;
                    cout << " >>> ";
                    cin >> coluna;

                } while(jogo[linha - 1][coluna - 1] != 0);
            }

        }
        else                        // jogador 2 - computador
        {
            cout << "Vez do jogador 2:\n";
            cout << "Computador, digite, respectivamente, a linha e coluna em que deseja colocar o 'O':\n";

            srand(time(NULL));

            linha = rand() % 3;
            coluna = rand() % 3;

            if( jogo[linha][coluna] != 0 ) // � preciso que aquela posi��o ainda n�o tenha sido escolhida antes
            {
                do
                {
                    linha = rand() % 3;
                    coluna = rand() % 3;

                } while(jogo[linha][coluna] != 0);
            }

            cout << " >>> linha " << linha + 1 << endl;
            cout << " >>> coluna " << coluna + 1 << endl;
        }

        if(contQualJogador % 2 == 0) // jogador 1
        {
            jogo[linha - 1][coluna - 1] = 1;
        }
        else                        // jogador 2 - computador
        {
            jogo[linha][coluna] = -1;
        }

        exibeTabuleiro();

        if(checaVencedor() == 1)
        {
            cout << "O jogador 1 venceu esta partida! Parab�ns!\n";
            break;

        }
        if(checaVencedor() == -1)
        {
            cout << "O computador venceu esta partida! Parab�ns, senhora m�quina!\n";
            break;
        }
        if(contQualJogador == 8)
        {
            if(checaVencedor() == 1)
            {
                cout << "O jogador 1 venceu esta partida! Parab�ns!\n";

            }
            if(checaVencedor() == -1)
            {
                cout << "O jogador 2 venceu esta partida! Parab�ns!\n";
            }
            if(checaVencedor() == 0)
                cout << "Ningu�m venceu a partida! Empate!\n";
        }

        contQualJogador++;
    }
}
