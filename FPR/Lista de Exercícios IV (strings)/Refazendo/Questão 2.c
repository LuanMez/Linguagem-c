/*Quest�o 02:
Dada uma string s, desenvolver uma fun��o
que determine se s � ou n�o um pal�ndromo.
Observa��o: uma string s ser� um pal�ndromo
quando seus caracteres formarem a mesma
sequ�ncia, independente se s � percorrida da
esquerda para direita ou vice-versa.*/

#include<stdio.h>
#include<string.h>

int palindromo(char string[])
{
	//declara��o das varaiveis
	int i, j, fim=strlen(string);
	
	for(i=0, j=fim-1; i<fim/2; i++, j--) //i come�a em 0 e j fim -1 pq o fim � o \0 entao ignora ele
	{
		if(string[i]!=string[j]) //verificar se as letras s�o iguais
		{
			return -1;
		}
	}
	return 0;
}

void main ()
{
	//declara��o das variaveis
	char string[30];//={"arara"};
	int res;
	
	//leitura da palavra
	printf("Digite uma palavra palindrome: ");
	fflush(stdin);
	gets(string);
	
	res=palindromo(string); //retornando o valor para a main
	
	//exibindo se deu certo ou nao
	if(res==0)
	{
		printf("A palavra eh palindromo");
	}
	else
	{
		printf("A palavra NAO eh palindromo, seu otario");
	}
}
