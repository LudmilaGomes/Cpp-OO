#include <stdio.h>
#include <string.h>

// FUNCIONOU

typedef struct 
{
    char descricao[50];
    float peso;
    char tipo;
} tMovel;

void TiraBarraN(char string[])
{
    int i;

    for(i = 0; string[i] != '\0'; i++)
    {
        if( string[i] == '\n' )
        {
            string[i] = '\0';
        }
    }
}

int main()
{
    int nMoveis, i;
    tMovel moveis[15];
    int quantMoveis10kg = 0, 
        quantMoveisReal = 0;
    float movelMaisPesado;

    scanf("%d", &nMoveis);
    getchar();
    //fflush(stdin);

    for(i = 0; i < nMoveis; i++)
    {
        //fflush(stdin);
        getchar();
        fgets(moveis[i].descricao, 50, stdin);
        scanf("%f%*c", &moveis[i].peso);
        scanf("%c%*c", &moveis[i].tipo);
    }

    for(i = 0; i < nMoveis; i++)
    {
        TiraBarraN(moveis[i].descricao);
    }

    movelMaisPesado = moveis[0].peso;
    for(i = 0; i < nMoveis; i++)
    {
        if(moveis[i].tipo == 's' && moveis[i].peso > 10.0)
        {
            quantMoveis10kg++;
        }

        if( strstr(moveis[i].descricao, "Real") != NULL )
        {
            quantMoveisReal++;
        }

        if( movelMaisPesado < moveis[i].peso )
        {
            movelMaisPesado = moveis[i].peso;
        }
    }

    printf("Tipo \'s\' acima de 10Kg: %d\n", quantMoveis10kg);
    printf("Termina em  \"Real\": %d\n", quantMoveisReal);

    for(i = 0; i < nMoveis; i++)
    {
        if( movelMaisPesado == moveis[i].peso )
        {
            printf("Mais pesado: \"%s\"\n", moveis[i].descricao);
            break;
        }
    }

    return 0;
}
/*

3
Cadeira de balanço Real
10
s
Criado Mudo
6
f
Mesa de Jantar Real
30
f

4
Banco
3
f
Sofá
50
w
Cadeira de Escritório Real
15
f
Aparador
10
f

3
Cadeira de balanço
11
s
Cadeira Simples
6
f
Mesa de Jantar
30
f

*/