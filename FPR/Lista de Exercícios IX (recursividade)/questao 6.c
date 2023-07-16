/*Quest�o 06:
Dada uma string s, desenvolver uma fun��o
recursiva que determine se s � ou n�o um
pal�ndromo.*/

#include<stdio.h>
#include<string.h>

int palindromo2(char s[], int i, int f);
int palindromo(char s[]);

void main ()
{
	char s[30];
	int res;
	
	printf("Digite a palavra para verificar se eh palindro: ");
	fflush(stdin);
	gets(s);
	
	res=palindromo(s);
	
	if(res==0)
	{
		printf("A palavra eh palindromo");
	}
	else
	{
		printf("A palavra NAO eh palindromo");
	}
}

int palindromo2(char s[], int i, int f)
{
	if(i<f)
	{
		if(s[i]!=s[f])
		{
			return -1;
		}
		else
		{
			return palindromo2(s, i+1, f-1);
		}
	}
	else
	{
		return 0;	
	}
	
}

int palindromo(char s[])
{
	int f;
	f=strlen(s)-1;
	return palindromo2(s, 0, f);
}


