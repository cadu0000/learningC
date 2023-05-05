#include <stdio.h>

int main()
{

    int amigosTotal, diasTotal, infectado, primeiraR, amigosPorReuniao, amigosInfectados, amigosDaReuniao;
    printf("amigosTotal e diasTotal:");
    scanf("%d", &amigosTotal);
    scanf("%d", &diasTotal);
    printf("infectados e primeiraR:");
    scanf("%d", &infectado);
    scanf("%d", &primeiraR);

    for (int i = 0; i < diasTotal; i++)
    {
        scanf("%d", &amigosPorReuniao);
        for (int j = 0; j < amigosPorReuniao; j++)
        {
            scanf("%d", &amigosDaReuniao);
            if (amigosDaReuniao == infectado)
            {
                amigosInfectados += amigosPorReuniao;
            }
        }
    }
    printf("%d", amigosInfectados);

    return 0;
}