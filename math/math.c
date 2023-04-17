#include <stdio.h>
#include <math.h>

int maina()
{

    double square = sqrt(16);
    printf("raíz quadrada de 16 é %lf\n", square);
    double quadrado = pow(2, 4);
    printf("2 elevado ao quadrado é %lf\n", quadrado);
    int aproximacao = round(3.14);
    printf("o valor aproximado de pi é %d\n", aproximacao);
    int aproximacaoCima = ceil(3.14);
    printf("o valor aproximado de pi pra cima é %d\n", aproximacaoCima);
    int aproximacaoBaixo = round(3.14);
    printf("o valor aproximado de pi pra baixo é %d\n", aproximacaoBaixo);
    double modulo = fabs(-50);
    printf("o módulo de -50 é %lf\n", modulo);
    // sin, cos, tan, log tbm podem ser usados

    return 0;
}