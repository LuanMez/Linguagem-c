/*Questão 07:
Desenvolver uma função recursiva que
determine o número de caracteres comuns
entre duas strings s1 e s2.*/

#include<stdio.h>
#include<string.h>

//Prototipo das funções
int quantCaracter2(char str1[], char str2[], int inicio1, int inicio2, int fim1, int fim2)
{
	if(inicio1==fim1 || inicio2==fim2)
	{
		return 0;
	}
	else
	{
		if(str1[inicio1]==str2[inicio2])
		{
			return 1 + quantCaracter2(str1, str2, inicio1+1, inicio2+1, fim1, fim2);
		}
		else
		{
			return quantCaracter2(str1, str2, inicio1+1, inicio2, fim1, fim2);
		}
	}
}
int quantCaracter(char str1[], char str2[])
{
	int fim1=strlen(str1), fim2=strlen(str2);
	return quantCaracter2(str1, str2, 0, 0, fim1, fim2);
}

void main ()
{
	char str1[30];
	char str2[30];
	int resultado;
	
	printf("Digite a primeira string: ");
	fflush(stdin);
	gets(str1);
	
	printf("Digite a segunda string: ");
	fflush(stdin);
	gets(str2);
	
	resultado=quantCaracter(str1, str2);
	
	printf("A quantidade de caracter em comum eh: %d", resultado);
}

