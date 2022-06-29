// Correto
#include <stdio.h>

int main()
{
    int opcao;

    while(1)
    {
        printf("1 - Item 1\n"
               "2 - Item 2\n"
               "3 - Item 3\n"
               "4 - Sair\n");
    
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Item %d\n", opcao);
                break;
            case 2:
                printf("Item %d\n", opcao);
                break;
            case 3:
                printf("Item %d\n", opcao);
                break;
            case 4:
                printf("Sair\n");
                return 0;
            default:
                printf("Opcao %d Invalida\n", opcao);
                break;
        }
    }
    
    return 0;
}