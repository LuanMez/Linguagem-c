/*
Questão 02 [2,5 pontos]:
Implementar uma função que, dadas duas strings s1 e
s2, crie uma nova string – s3 – contendo todos os
caracteres de s1 que não estejam em s2.
//s3 nao pode ter repetido;
*/

#define TAM 10
#include <stdio.h>
#include <string.h>

int verificar (char s[], char s2[], char s3[])
{
	
	int i, j, cont = 0, tama=0, k, aux=0;
	int tam2= strlen(s2);
	int tam = strlen(s);
	
	
	for (i=0;i<tam; i++)
	{
		
		cont = 0;
		aux = 0;
		
		for (j=0;j<tam2; j++)
		{
			
			if(s[i]==s2[j])
			{
				cont++;
			}
	
		} 
		
		for (k=0;k<tama; k++)
		{
			if (s[i]==s3[k])
			{
				aux++;
			}
		
		}
		
		if (cont==0 && aux==0)
		{
			s3[tama]=s[i];
			printf("aqui ta o valor de s %c\n", s[i]);
			printf("aqui ta o valor de s3 %c\n", s3[tama]);
			tama++;
		}
			
	}
	//s3[tama]='\0';
	printf("%d", strlen(s3));

}

void main ()
{
	char s[10];
	char s2[10];
	char s3[10];
	
	printf("Digite a sua palavra de s1: ");
	fflush(stdin);
	gets(s);
	
	printf("Digite a sua palavra de s2: ");
	fflush(stdin);
	gets(s2);
	
	verificar(s, s2, s3);
	
	puts(s3);
	

}
	
