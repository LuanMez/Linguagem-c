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

/*void criandoSubstring(char string[], char substring[], int p, int s)
{
	int i, j, fim=strlen(string);
	
		if((p<0) || (p>=fim) || (s<0) || (s>fim))
		{
			substring[0]='\0'; //fazendo uma substring vazia
		}
		else
		{
			for(i=p, j=0; j<s && string[i]!='\0'; i++, j++)
			{
				substring[j]=string[i];
		}
	}
}*/

void criandoSubstring(char str1[], char str2[], int posi, int num)
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
	char string[30];
	char substring[30];
	int p,s;
	
	printf("Digite a sua palavra: ");
	fflush(stdin);
	gets(string);
	
	printf("Digite o comeco da substring p: ");
	fflush(stdin);
	scanf("%d", &p);
	
	printf("Digite o comeco da substring s: ");
	fflush(stdin);
	scanf("%d", &s);
	
	criandoSubstring(string, substring, p, s);
	
	puts(substring);
}
