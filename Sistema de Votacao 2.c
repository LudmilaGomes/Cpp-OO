#include <stdio.h>
#include <math.h>

// FUNCIONOU

typedef struct
{
    int numero;
    char nome[25];
    double contVotos;
} tCandidatos;


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
    tCandidatos candidatos[10];
    int quantCandidatos, i, voto, 
    indicaNulo;
    double votosNulos = 0, totalVotos = 0,
    maiorPorcentagemVotos;

    scanf("%d", &quantCandidatos);
    getchar();

    for(i = 0; i < quantCandidatos; i++) // zera os contadores de votos dos candidatos;
    {
        candidatos[i].contVotos = 0;
    }

    for(i = 0; i < quantCandidatos; i++)
    {
        scanf("%d", &candidatos[i].numero);
        getchar();

        fgets(candidatos[i].nome, 25, stdin);
        TiraBarraN(candidatos[i].nome);
    }

    while(1)
    {
        scanf("%d", &voto);

        if( voto < 0 )
        {
            break;
        }

        for(i = 0; i < quantCandidatos; i++)
        {
            if(voto == candidatos[i].numero)
            {
                candidatos[i].contVotos++;
                indicaNulo = 0;
                break;
            }
            else
            {
                indicaNulo = 1;
            }
        }
        if(indicaNulo == 1) 
            {
                votosNulos++;
            }

        totalVotos++;
    }

    maiorPorcentagemVotos = (candidatos[0].contVotos/totalVotos);

    for(i = 1; i < quantCandidatos; i++)
    {
        if(maiorPorcentagemVotos < candidatos[i].contVotos/totalVotos)
        {
            maiorPorcentagemVotos = candidatos[i].contVotos/totalVotos;
        }
    }

    for (i = 0; i < quantCandidatos; i++)
    {
        printf("%.2f - %d - %s", (double) (candidatos[i].contVotos/totalVotos)*100, candidatos[i].numero, candidatos[i].nome);

        if(floor((maiorPorcentagemVotos)*100) == floor((candidatos[i].contVotos/totalVotos)*100))
        {
            printf(" VENCEDOR\n");
        }
        else
        {
            printf("\n");
        }
    }

    printf("%.2f - Nulos\n", (double) (votosNulos/totalVotos)*100);

    return 0;
}

/*
        //if(round(maiorPorcentagemVotos) == round(candidatos[i].contVotos/totalVotos))

        //if(floor(maiorPorcentagemVotos) == floor(candidatos[i].contVotos/totalVotos))
2
2405
Vital Brazil
2406
Euryclides Zerbini
2406
2405
2406
2406
2406
2424
-1

3
2407
Bertha Becker
2408
Artur Avila
2409
Celina Turchi
2407
2408
2407
2407
2407
2407
2407
2409
2409
-1

5
2400
Carlos Chagas
2401
Graziela Barroso
2402
Milton Santos
2403
Rosaly Lopes
2404
Cesar Lattes
2401
2402
2401
2403
2403
2402
2401
2400
2401
2401
2424
2403
-1

10
2410
Arquimedes
2411
Nicolau Copernico
2412
Galileu Galilei
2413
Johannes Kepler
2414
Isaac Newton
2415
Leonhard Euler
2416
Carl Friedrich Gauss
2417
Michael Faraday
2418
Charles Darwin
2419
Louis Pasteur
2415
2416
2417
2416
2419
2419
2415
2410
2411
2412
2415
2415
2410
-1

*/

/*

15.38 - 2410 - Arquimedes                       
7.69 - 2411 - Nicolau Copernico                 
7.69 - 2412 - Galileu Galilei                   
0.00 - 2413 - Johannes Kepler                   
0.00 - 2414 - Isaac Newton                      
30.77 - 2415 - Leonhard Euler VENCEDOR          
15.38 - 2416 - Carl Friedrich Gauss             
7.69 - 2417 - Michael Faraday                   
0.00 - 2418 - Charles Darwin                    
15.38 - 2419 - Louis Pasteur                    
38.46 - Nulos                                   

15.38 - 2410 - Arquimedes
7.69 - 2411 - Nicolau Copernico
7.69 - 2412 - Galileu Galilei
0.00 - 2413 - Johannes Kepler
0.00 - 2414 - Isaac Newton
30.77 - 2415 - Leonhard Euler VENCEDOR
15.38 - 2416 - Carl Friedrich Gauss
7.69 - 2417 - Michael Faraday
0.00 - 2418 - Charles Darwin
15.38 - 2419 - Louis Pasteur
0.00 - Nulos

*/