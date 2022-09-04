#ifndef JOGOVELHA_H
#define JOGOVELHA_H

#define TAM_MATRIZ 9
/// Se a casa tiver o n�mero 0, ela est� vazia. Se tiver o n�mero 1 � porque o jogador 1 jogou l�,
/// e se tiver -1, � porque o jogador 2 jogou naquela posi��o.

/*
 Matriz 3x3 representa o tabuleiro do jogo da velha. Se a casa tiver o n�mero 0, est� vazia.
 Se tiver o n�mero 1 o jogador 1 jogou l�, se tiver -1, o jogador 2 jogou l�.
*/

class JogoVelha
{
    public:
        JogoVelha();
        virtual ~JogoVelha();

        void inicia();                   // inicializa o tabuleiro - 0 em todas as casas;
        void exibeTabuleiro();           // exibe o tabuleiro;
        void printBloco(int l, int c);   // m�todo que mostra um espa�o vazio se o valor do elemento na matriz � 0; mostra X, se valor � 1 e O, se valor � -1;
        void realizaJogadas();           // pede ao usu�rio a linha e coluna em que o jogador vai jogar; verifica��es s�o necess�rias;
        int checaVencedor();             // verifica se um dos jogadores venceu;
        void realizaJogadasComputador(); // se o usu�rio escolher jogar contra o computador

    protected:

    private:
        int jogo[3][3];
        int linha, coluna;
        int contQualJogador;            // contador para verificar se � a vez do jogador 1 ou do jogador 2
};

#endif // JOGOVELHA_H
