#include<stdio.h>

void main ()
{
	//declaração das variaveis
	int v[5];
	int i;
	
	for (i=0; i<5; i++)
	{
		//leitura dos dados
		printf("Insira um dado: \n");
		//armazenamento dos dados nos vetores
		scanf("%d", &v[i]);
	}
	
	//exibição do dados inseridos uma unica vez
	printf("Dados inseridos: \n");
	for(i=0; i<5; i++)
	{
		//exibição de cada valor escrito pelo usuario
		printf("%d ", v[i]);
	}
}
