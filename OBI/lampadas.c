#include <stdio.h>
#include <stdbool.h>

int main()
{

    int apertar, valorAperto;
    bool lamp1 = false, lamp2 = false;

    scanf("%d", &apertar);

    for (int i = 0; i < apertar; i++)
    {
        scanf("%d", &valorAperto);
        if (valorAperto == 1)
        {
            lamp1 = !lamp1;
        }
        else if (valorAperto == 2)
        {
            lamp1 = !lamp1;
            lamp2 = !lamp2;
        }
    }

    printf("%d \n", lamp1 ? 1 : 0);
    printf("%d \n", lamp2 ? 1 : 0);

    return 0;
}