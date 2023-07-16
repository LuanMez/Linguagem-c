/*Questão 04:
Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.*/

#include<stdio.h>
#include<string.h>

void remover(char s[], char letra)
{
	int i, j, fim=strlen(s);//strlen é o numero contando com o \0;
	
	for(i=0; s[i]!='\0';)
	{
		if(s[i]==letra)
		{
			j=i;
			
			while(s[j]) //s[j] == s[j]!='\0' == strlen(s);
			{
				s[j]=s[j+1];
				
				j++;
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
	char s[30];
	char letra;
	
	printf("Digite a sua palavra: ");
	fflush(stdin);
	gets(s);
	
	printf("Digite a letra que deseja remover: ");
	fflush(stdin);
	scanf("%c", &letra);
	
	remover(s, letra);
	
	puts(s);
}
