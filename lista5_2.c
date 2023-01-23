#include <stdio.h>
#include <time.h>

void preenchevetor(int *vet)
{
	for(int i=0;i<30;i++)
	{
		vet[i]=(rand()%101);
	}
}

void exibevetor(int *vet)
{
	printf("\n\n");
	for(int i=0;i<29;i++)
	{
		printf("%d, ",vet[i]);
	}
	printf("%d\n",vet[29]);
}

void zeropares(int *vet)
{
	for(int i=0;i<30;i++)
	{
		if(vet[i]%2==0)
		{
			vet[i]=0;
		}
	}
}

void dobra(int *vet)
{
	for(int i=0;i<30;i++)
	{
		vet[i]=vet[i]*2;
	}
}

void igualavetor(int *vet1,int *vet2)
{
	for(int i=0;i<30;i++)
	{
		vet2[i]=vet1[i];
	}
}

void soma(int *vet1,int *vet2)
{
	for(int i=0;i<30;i++)
	{
		vet1[i]=vet1[i]+vet2[i];
	}
}

int main()
{
	int segundos = time(0);
	srand(segundos);
	int vetor[30];
	int vetoraux[30];
	int select;
	
	while(select!=4)
	{
		printf("MENU DE OPCOES:\n");
		printf("1-zerar os valores pares do vetor\n");
		printf("2-multiplica todos os elementos do vetor por 2\n");
		printf("3-somar a opcao 1 a opcao 2\n");
		printf("4-encerrar programa\n");
		printf("insira sua opcao: ");
		scanf("%d",&select);
		
		switch (select)
		{
			case 1:
				preenchevetor(vetor);
				exibevetor(vetor);
				zeropares(vetor);
				exibevetor(vetor);
				break;
			
			case 2:
				preenchevetor(vetor);
				exibevetor(vetor);
				dobra(vetor);
				exibevetor(vetor);
				break;
				
			case 3:
				preenchevetor(vetor);
				exibevetor(vetor);
				igualavetor(vetor,vetoraux);
				zeropares(vetor);
				dobra(vetoraux);
				soma(vetor,vetoraux);
				exibevetor(vetor);
				break;
				
				
		}
	}
}