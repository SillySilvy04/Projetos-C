#include <stdio.h>

main()
{
    int n;
    int i;
    int j;
    int cont=0;

    printf("insira seu numero N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("*");

        for(j=1;j<=n;j++)
        {
            if (cont>=j)
            {
                printf("**");
            }
        }

        cont++;

        printf("\n");
    }
}