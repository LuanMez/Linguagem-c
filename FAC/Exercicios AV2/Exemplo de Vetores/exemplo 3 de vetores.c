#include<stdio.h>

void main ()
{
	//declara��o das variaveis
	int v[5];
	int i;
	
	for (i=0; i<5; i++)
	{
		//leitura dos dados
		printf("Insira um dado: \n");
		//armazenamento dos dados nos vetores
		scanf("%d", &v[i]);
	}
	
	//exibi��o do dados inseridos uma unica vez
	printf("Dados inseridos: \n");
	for(i=0; i<5; i++)
	{
		//exibi��o de cada valor escrito pelo usuario
		printf("%d ", v[i]);
	}
}
