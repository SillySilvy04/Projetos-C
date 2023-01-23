#include<stdio.h>

main()
{
    int idade;
    int cont=0;
    int i;
    int mais21=0;
    int media60=0;

    printf("insira a idade desejada: ");
    scanf("%d",&idade);

    while(idade>0)
    {
        cont++;

        if(idade>21)
        {
            mais21++;
        }

        if(idade>60)
        {
            media60+=idade;
        }

        printf("insira sua proxima idade desejada: ");
        scanf("%d",&idade);
    }

    printf("\na media das idades das pessoas que tem mais de 60 anos é: %.d\n",media60/cont);
    printf("o numero de pessoas com mais de 21 anois foi: %d",mais21);    
}