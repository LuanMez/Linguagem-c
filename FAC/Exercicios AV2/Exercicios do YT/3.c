#include<stdio.h>

void main ()
{
	int v[5], i, x, ve, valor, aux, j, c, arma=0;
	
	for(i=0; i<5; i++)
	{
		printf("Insira o valor no vetor [%d]: ", i);
		scanf("%d", &v[i]);
	}
	printf("Escolha 1 para consultar o valor armazenado pelo indice\nEscolha 2 para consultar o indice pelo valor\nEscolha 3 para verificar se o numero digitado esta no vetor\nEscolha 4 para verificar quantos tem\n");
	scanf("%d", &x);
	
	switch(x)
	{
		case 1:
			printf("Qual indice quer verificar: ");
			scanf("%d", &ve);
			printf("valor e %d", v[ve]);
			break;
		case 2:
			while(aux>=0 && aux<=4)
			{
				printf("Qual varios indices quer verificar: ");
			    scanf("%d", &aux);
			    if(aux>=0 && aux<=4)
			    {
			    	printf("\nvalor e %d\n", v[aux]);
				}
			}
			break;
		case 3:
			printf("Qual valor quer buscar no vetor: ");
			scanf("%d", &j);
			for (i=0; i<j; i++)
			{
				if(i=j)
				{
					printf("valor do vetor[%d] e' %d", j, v[i]);
				}
			}
			break;
		case 4:
			printf("Qual valor quer ver quantas vezes foi achado: ");
			scanf("%d", &c);
			for(i=0; i<5; i++)
			{
				if(c==v[i])
				{
					arma++;
				}
			}
			printf("o valor foi achado %d vezes", arma);
	}
}
