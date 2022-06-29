#include <stdio.h>

typedef struct
{
    char modelo[20];
    char marca[20];
    int ano;
    int preco;
} tVeiculo;

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
    tVeiculo veiculos[2];
    int i;

    for(i = 0; i < 2; i++)
    {
        fgets(veiculos[i].modelo, 20, stdin);
        TiraBarraN(veiculos[i].modelo);
        //fflush(stdin);

        fgets(veiculos[i].marca, 20, stdin);
        TiraBarraN(veiculos[i].marca);
        //fflush(stdin);

        scanf("%d", &veiculos[i].ano);
        getchar();
        //fflush(stdin);

        scanf("%d", &veiculos[i].preco);
        getchar();
        //fflush(stdin);
    }

    if( veiculos[0].ano > veiculos[1].ano )
    {
        printf("%s %s\n", veiculos[1].marca, veiculos[1].modelo);
    }
    else if( veiculos[0].ano < veiculos[1].ano )
    {
        printf("%s %s\n", veiculos[0].marca, veiculos[0].modelo);
    }
    else if( veiculos[0].ano == veiculos[1].ano )
    {
        if( veiculos[0].preco > veiculos[1].preco )
        {
            printf("%s %s\n", veiculos[1].marca, veiculos[1].modelo);
        }
        else if( veiculos[0].preco < veiculos[1].preco )
        {
            printf("%s %s\n", veiculos[0].marca, veiculos[0].modelo);
        }
    }

    return 0;
}

/*

Gol
VW
2000
8029
Fiesta
Ford
2000
7844

HB20
Hyundai
2015
34615
Polo
VW
2014
34220

Gol
VW
2000
8029
Polo
VW
2014
34220

*/