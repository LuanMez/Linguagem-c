#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 50

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char hardtext[N]={"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("Insira um texto: ");
	fflsuh(stdin);
	gets(senha_usr); //armazenou o texto
	
	ok = strcmp(hardtext, senha_usr);   //verifica se as duas strings são iguais, se forem
										//iguais 'ok'vai receber 0, se não for recebe outro valor.
	
	if(ok==0)
	{
		printf("Textos iguais.\n");
	}
	else
	{
		printf("Textos diferentes.\n");
	}
}
