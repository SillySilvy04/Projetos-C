#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int ler()
{
    int z;

    printf("\ninsira seu valor: ");
    scanf("%d",&z);

    return z;
}

int soma(int y,int z)
{
    int soma;
    soma=y+z;

    return soma;
}

int subtracao(int y,int z)
{
    int resultado;
    resultado=y-z;

    return resultado;
}

int multiplicar(int y, int z)
{
    int resultado;
    resultado=y*z;

    return resultado;
}

float dividir(float y, float z)
{
    float resultado;
    resultado=y/z;

    return resultado;
}

int exponencial(int y, int z)
{
    int resultado=1;
    int i;

    for(i=1;i<=z;i++)
    {
        resultado=resultado*y;
    }

    return resultado;
}

int main()
{
    int select;
    int x;
    int y;

    while (select != 10)
    {
        printf("*MENU DE SELECAO*\n");
        printf("1-inserir valor de X\n");
        printf("2-inserir valor de Y\n");
        printf("3-somar X+Y\n");
        printf("4-subrtrair X-Y\n");
        printf("5-multiplicar X*Y\n");
        printf("6-dividir X/Y\n");
        printf("7-exponencial de X^Y\n");
        printf("8-log(X)\n");
        printf("9-raiz quadrada(X)\n");
        printf("10-ENCERRAR PROGRAMA\n");
        printf("insira sua operacao desejada: ");
        scanf("%d",&select);

        switch (select)
        {
            case 1: x=ler();
                break;
            case 2: y=ler();
                break;
            case 3: printf("\nX+Y=%d\n",soma(x,y));
                break;
            case 4: printf("\nX-Y=%d\n",subtracao(x,y));
                break;
            case 5: printf("\nX*Y=%d\n",multiplicar(x,y));
                break;
            case 6: printf("\nX/Y=%.2f\n",dividir(x,y));
                break;
            case 7: printf("\nX^Y=%.d\n",exponencial(x,y));
                break;
            case 8: printf("\nlog(X)=%f\n",log(x));
                break;
            case 9: printf("\nraiz(X)=%d\n",sqrt(x));
                break;
            
            
        }
    }
}