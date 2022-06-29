#include <stdio.h>

// NÃO FUNCIONA

typedef struct
{
    char CPF[20];
    char nome[30];
    char sNome[30];
    char endereco[100];
    char telefone[20];
} tArquivo;

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
    int quantPessoas, i;

    scanf("%d", &quantPessoas);
    getchar();
    //fflush(stdin);

    tArquivo informacoes[quantPessoas];
    FILE *fp;
    char linha[300];

    for(i = 0; i < quantPessoas; i++)
    {
        fgets(informacoes[i].CPF, 20, stdin);
        //fflush(stdin);
        TiraBarraN(informacoes[i].CPF);

        fgets(informacoes[i].nome, 30, stdin);
        //fflush(stdin);
        TiraBarraN(informacoes[i].nome);

        fgets(informacoes[i].sNome, 30, stdin);
        //fflush(stdin);
        TiraBarraN(informacoes[i].sNome);

        fgets(informacoes[i].endereco, 100, stdin);
        //fflush(stdin);
        TiraBarraN(informacoes[i].endereco);

        fgets(informacoes[i].telefone, 100, stdin);
        //fflush(stdin);
        TiraBarraN(informacoes[i].telefone);
    }

    fp = fopen("informacoes - pessoas.csv", "w"); // 'w' de write (escrever no arquivo)

    if(fp <= 0)
    {
        return 0;
    }

    fprintf(fp, "CPF,nome,snome,endereço,telefone\n");

    for(i = 0; i < quantPessoas; i++)
    {
        fprintf(fp, "%s,%s,%s,%s,%s\n", informacoes[i].CPF, informacoes[i].nome,
        informacoes[i].sNome, informacoes[i].endereco, informacoes[i].telefone);
    }

    fclose(fp);

    fp = fopen("informacoes - pessoas.csv", "r");

    if(fp <= 0)
    {
        return 0;
    }

    while (!feof(fp))
    {
        fgets(linha, 300, fp);

        if(feof(fp))
        {
            break;
        }
        printf("%s", linha);
    }
    
    fclose(fp);

    return 0;
}

/*

3
11111
João
Pimentel
Av Salgado Filho 222
999 1234
22222
Maria
Silva
Av Roberto Freire 555
999 4321
33333
Augusto
Xavier
Av Tirol 222
999 2222

4
1234
Camila
Gomes
Rua Praia de Ponta Negra
999 0000
4321
Rodrigo
Medeiros
Av Salgado Filho 111
999 2222
101010
Pedro
Oliveira
Rua Potengi 123
999 1212
556655
João
Pinheiro
Rua do Sol 10
999 4444

*/