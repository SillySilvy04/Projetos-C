#include <stdio.h>

main()
{
    int n;
    int i;

    printf("insira seu numero: ");
    scanf("%d",&n);

    while(n>0)
    {
        printf("este numero é divisível por: \n\n");


        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                printf("%d\n",i);
            }
        }

        printf("\ninsira o seu proximo numero: ");
        scanf("%d",&n);
    }
}