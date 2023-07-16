/*Questão 02:
Dada uma string s, desenvolver uma função
que determine se s é ou não um palíndromo.
Observação: uma string s será um palíndromo
quando seus caracteres formarem a mesma
sequência, independente se s é percorrida da
esquerda para direita ou vice-versa.*/

#include<stdio.h>
#include<string.h>

int palindromo(char string[])
{
	//declaração das varaiveis
	int i, j, fim=strlen(string);
	
	for(i=0, j=fim-1; i<fim/2; i++, j--) //i começa em 0 e j fim -1 pq o fim é o \0 entao ignora ele
	{
		if(string[i]!=string[j]) //verificar se as letras são iguais
		{
			return -1;
		}
	}
	return 0;
}

void main ()
{
	//declaração das variaveis
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
