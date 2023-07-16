/*Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 30

void remover (char s[], char cara)
{
	int i, j;
	
	for(i=0; s[i];)
	{
		if(s[i]==cara)
		{
			
			for(j=i; s[j]; j++)
			{
				s[j]=s[j+1];
			}
		}
		else
		{
			i++;
		}
	}
}

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s[TAM]={"capivara"};
	char caracter;
	
	printf("Digite o caracter que deseja remover: ");
	scanf("%c", &caracter);
	
	remover(s,caracter);
	
	puts(s);
}
