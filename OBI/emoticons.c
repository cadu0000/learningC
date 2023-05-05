#include <stdio.h>
#include <string.h>

int main()
{
    int divertido, chateado =0;
    char mensagem[280];
    char verificacao[3] = {":)("};

    fgets(mensagem, 280, stdin) ;
    for (int i = 0; i < strlen(mensagem)-1; i++)
    {
        if (mensagem[i] == verificacao[0] && mensagem[i + 2] == verificacao[1])
        {
            divertido++;
        }
        else if (mensagem[i] == verificacao[0] && mensagem[i + 2] == verificacao[2])
        {
            chateado++;
        }
    }
    printf("%d\n", divertido);
    printf("%d\n", chateado);

    if (divertido > chateado)
    {
        printf("divertido");
    }
    else if (chateado > divertido)
    {
        printf("chateado");
    }
    else
    {
        printf("neutro");
    }
    return 0;
}