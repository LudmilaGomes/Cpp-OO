#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} tData;

int RetornaDataMaisAntiga(tData d1, tData d2)
{
    if(d1.ano > d2.ano)
    {
        return -1;
    }
    else if(d1.ano < d2.ano)
    {
        return 1;
    }
    else if(d1.ano == d2.ano)
    {
        if(d1.mes > d2.mes)
        {
            return -1;
        }
        else if(d1.mes < d2.mes)
        {
            return 1;
        }
        else if(d1.mes == d2.mes)
        {
            if(d1.dia > d2.dia)
            {
                return -1;
            }
            else if(d1.dia < d2.dia)
            {
                return 1;
            }
            else if(d1.dia == d2.dia)
            {
                return 0;
            }
        }
    }
}

int main()
{
    int i;
    tData data[2];

    for(i = 0; i < 2; i++)
    {
        scanf("%d", &data[i].dia);
        scanf("%d", &data[i].mes);
        scanf("%d", &data[i].ano);
    }

    if( RetornaDataMaisAntiga(data[0], data[1]) == 1 )
    {
        printf("Pessoa 1 é mais velha\n");
    }
    else if( RetornaDataMaisAntiga(data[0], data[1]) == 0 )
    {
        printf("Pessoas são da mesma idade\n");
    }
    else if( RetornaDataMaisAntiga(data[0], data[1]) == -1 )
    {
        printf("Pessoa 2 é mais velha\n");
    }
    
    return 0;
}