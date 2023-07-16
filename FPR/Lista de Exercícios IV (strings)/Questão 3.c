/*Quest�o 03:
Desenvolver uma fun��o que, dada uma string
s, crie uma substring que inicie na posi��o p de
s e contenha n caracteres.
Observa��es: se p e/ou n forem inv�lidos, a
substring ser� vazia; ii) se s n�o possuir n
caracteres al�m de p, a substring a ser criada
come�ar� em p e terminar� no final de s.*/

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
