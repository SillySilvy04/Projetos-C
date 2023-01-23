#include <stdio.h>

main()
{
    int x;
    int y;
    int resultado=0;
    int resto;

    printf("X/Y=Z\n");
    printf("insira o seu valor de X: ");
    scanf("%d",&x);
    printf("insira o seu valor de Y: ");
    scanf("%d",&y);

    resto = x;

    while(y<resto)
    {
        resto=resto-y;
        resultado++;
    }

    printf("\n\n%d/%d=%d, resto=%d",x,y,resultado,resto);
}