/*Questão 03:
Desenvolver uma função que, dada uma string
s, crie uma substring que inicie na posição p de
s e contenha n caracteres.
Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 30 

void substring(char str1[], char str2[], int posi, int num)
{
	int i, j, tam=strlen(str1);
	
	if((posi>=tam) || (posi<0) || (num>tam) || (num<0))
	{
		//str2[0]='\0';
		strcpy(str2,"");
	}
	else
	{	
		
		for(i=posi, j=0; j<num && str1[i]!='\0'; i++, j++)
		{
			str2[j]=str1[i];
		}
	
		if(str2[j]!='\0') //nao precisava desse if
		{
			str2[j]='\0';
		}
	
	}
}

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char str1[TAM]={"paralelepipedo"};
	char str2[TAM];
	int p, n;
	
	printf("Digite a posicao e o numero de caracteres: ");
	fflush(stdin);
	scanf("%d %d", &p, &n);
	
	substring(str1, str2, p, n);
	
	puts(str2);
	puts(str1);
}
