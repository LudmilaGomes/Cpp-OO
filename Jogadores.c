#include <stdio.h>

typedef struct
{
    char nome[40];
    int idade;
    int chutesAGol;
    int gols;
} tJogador;

void TiraBarraN(char string[])
{
    int i;

    for(i = 0; string[i] !='\0'; i++)
    {
        if(string[i] == '\n')
        {
            string[i] = '\0';
        }
    }
}

int main()
{   
    tJogador jogadores[2];
    int i;

    for(i = 0; i < 2; i++)
    {
        fgets(jogadores[i].nome, 40, stdin);
        TiraBarraN(jogadores[i].nome);

        scanf("%d", &jogadores[i].idade);
        getchar();
        scanf("%d", &jogadores[i].chutesAGol);
        getchar();
        scanf("%d", &jogadores[i].gols);
        getchar();
    }

    if( (float) jogadores[0].gols/jogadores[0].chutesAGol > (float) jogadores[1].gols/jogadores[1].chutesAGol )
    {
        printf("%s (%d)\n", jogadores[0].nome, jogadores[0].idade);
    }
    else
    {
        printf("%s (%d)\n", jogadores[1].nome, jogadores[1].idade);
    }

    //printf("j1: %d/%d = %.2f\n", jogadores[0].gols, jogadores[0].chutesAGol, (float) jogadores[0].gols/jogadores[0].chutesAGol);
    //printf("j2: %d/%d = %.2f\n", jogadores[1].gols, jogadores[1].chutesAGol, (float) jogadores[1].gols/jogadores[1].chutesAGol);

    return 0;
}

/*

Cristiano Ronaldo
35
15
3
Lionel Messi
33
14
4


Pelé
80
5
4
Maradona
60
10
2

Romário
54
28
2
Roberto Baggio
53
18
3

*/