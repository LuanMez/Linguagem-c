/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Manh�
	Professor Leonardo Vianna
	
	Prova a compor a AV1 (Parte II) - 11/05/2023
	
	Quest�o 03 [2,5 pontos]:
	Dadas duas strings s1 e s2, implementar uma fun��o que crie duas 
	outras strings - s3 e s4 - com as seguintes caracter�sticas:

	- s3: conter� todos os caracteres de s1 que tamb�m est�o em s2;
	- s4: conter� todos os caracteres de s1 que n�o est�o em s2.

	Exemplo: 

		s1:	"PROGRAMACAO"				
		s2:	"ALGORITMOS"				

		s3: "ROGRAMAAO"  //se achou um igual poe ele aqui
		s4: "PC" //se nao achou ninguem igual poe ele aqui
*/

//todos os iguais vai para s3 de s1 e s2
//todos diferentes vai para a s4 de s1 e s2 com repeti��o
//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
void verificando(char string1[], char string2[], char string3[], char string4[]);

//main
void main ()
{
	//declara��o de vari�veis
	char string1[20],
	     string2[20],
		 string3[20],
		 string4[20]; 
		 
	//inicializando as duas strings
	strcpy (string1, "PROGRAMACAO");
	strcpy (string2, "ALGORITMOS");
	
	//chamando a fun��o e armazenando os resultados em 'string3' e 'string4'
	verificando(string1, string2, string3, string4);
	
	//exibindo as novas strings
	printf ("\n\nstring3: %s\n", string3);
	printf ("string4: %s\n", string4);
}
	
//implementa��o das fun��es
void verificando(char string1[], char string2[], char string3[], char string4[])
{
	//declara��o das variaveis
	int i, j, k=0, z=0, tam3=0, tam4=0, cont=0, aux=0;
	//k e z sao o inicio da string3 e string4 respectivamente
	//tam3 e tam4 sao os tamanhos da string3 e string4 respectivamente
	//cont e aux sao as condi��es para que o programa de certo
	
	//varrendo a string1 at� o final
	for(i=0; string1[i]; i++)
	{
		//condi��o recebendo 0
		cont=0;
		aux=0;
		
		//varrendo a string2 at� o final
		for(j=0; string2[j]; j++)
		{
			//verificando se os mesmos caracteres sao iguais
			if(string1[i]==string2[j])
			{
				//atualizando o contador para nao se repetir
				cont=1;
			}
			//verificando novamente se o caracter � igual porem com o aux com 0 para nao repetir
			if((string1[i]==string2[j]) && (cont==1) && (aux==0))
			{
				string3[k]=string1[i];//string3 recebe o caracter da string1
				k++; //atualizando o numero da string3
				tam3++; //atualizando o tamanho da string3
				aux=1; //aux recebe 1 para que nao se repita
			}
			
		}
		//verificando se as condi��es mantiveram 0, entao nao teve nenhum igual
		if((cont==0) && (aux==0))
		{
			
			string4[z]=string1[i];//string4 recebe o caracter da string1
			z++;	//atualizando o numero da string4
			tam4++; //atualizando o tamanho da string3
		}
	}
}
