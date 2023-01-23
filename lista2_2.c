#include <stdio.h>

main()
{
    int n;
    int i;

    printf("insira o seu numero: ");
    scanf("%d",&n);

    printf("\n");

    for(i=100;i>=1;i--)
    {
        if(i%n==0)
        {
            printf("%d, ",i);
        }
    }
    printf("1");
}