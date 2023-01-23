#include <stdio.h>
#include <ctype.h>
#define TAM 30

void exibirfrase(char *string)
{
    printf("\nsua frase resultante: %s\n",string);
}

void convertemaiusculo(char *string)
{
    //localiza o fim da string
    int aux;
    for(int i=0;i<TAM;i++)
    {
        if(string[i]=='\0')
        {
            aux=i;
        }
    }

    for(int i=0;i<aux;i++)
    {
        string[i]=toupper(string[i]);
    }
}

int descobretamanho(char *string)
{
	int aux;
	for(int i=0;i<TAM;i++)
	{
		if(string[i]=='\0')
		{
			aux=i;
			break;
		}
	}
	
	return aux;
}

char *concatena(char *f1,char *f2,char *fraseresultante)
{
    int i=0;
    int j=0;
	int aux1=descobretamanho(f1);
	int aux2=descobretamanho(f2);

    while(i<aux1)
    {
        fraseresultante[i]=f1[i];
        i++;
    }

    while(j<aux2)
    {
        fraseresultante[i]=f2[j];
        j++;
        i++;
    }

    fraseresultante[i]='\0';

    return fraseresultante;
}

void capitaliza(char *string)
{
	int aux=descobretamanho(string);
	int cont=0;
	
	for(int i=0;i<aux;i++)
	{
		if(string[i]==' ')
		{
			string[i+1]=toupper(string[i+1]);
		}
	}
}

int compara(char *string1,char *string2)
{
	int aux1=descobretamanho(string1);
	int aux2=descobretamanho(string2);
	
	
	for(int i=0;i<aux1;i++)
	{
		for(int j=0;j<aux2;j++)
		{
			if(string1[i]>string2[j])
			{
				return 1;
			}
			else
			if(string1[i]<string2[i])
			{
			return -1;
		}
				
		return 0;
		}
	}
}

int main()
{
	char nfrase[2*TAM];
    char frase[TAM];
    char frase2[TAM];
    int select;

    printf("\n\ninsira sua frase 1: ");
    gets(frase);

    printf("insira sua frase 2: ");
    gets(frase2);

    while(select!=6)
    {
        printf("\nMENU DE OPCOES:\n");
        printf("1-converter uma frase de letra minuscula para maiuscula\n");
        printf("2-concatenar 2 frases\n");
        printf("3-trocar as letras antecedidadas de ' ' por letras maiúsculas\n");
        printf("4-compara lexograficamente duas frases\n");
        printf("5-descobrir o tamanho da frase 1\n");
        printf("6-encerrar programa\n");
        printf("insira sua opcao: ");
        scanf("%d",&select);

        switch (select)
        {
            case 1:
            	convertemaiusculo(frase);
            	exibirfrase(frase);
           		break;

            case 2:
            	exibirfrase(concatena(frase,frase2,nfrase));
            	break;
            	
            case 3:
            	capitaliza(frase);
            	exibirfrase(frase);
            	break;
            	
            case 4:
            	switch (compara(frase,frase2))
            	{
            		case 1:
            			printf("\na frase1 é maior que a frase2");
            			break;
            		
            		case 0:
            			printf("\nestas frases são iguais");
            			break;
            		
            		case -1:
            			printf("\na frase1 é menor que a frase2");
            			break;
				}
				break;
            	
            case 5:
            	printf("\n o tamanho da frase1 e: %d",descobretamanho(frase));
            	break;
            
            	
        }
        
    }
}