/*Questão 02 [2,5 pontos]:
Dadas duas strings s1 e s2, implementar uma função
que verifique se s1 é uma substring de s2 (retornando 1
caso seja ou 0, se não for). 


*/


#define TAM 50
#include <stdio.h>
#include <string.h>

int verificar (char s[], char s2[]) {
	
	int i, j = 0, cont = 0, aux = 0, k, p;
	
	int tam = strlen(s);
	int tam2 = strlen(s2);
	
	if (tam2 < tam) {
		
		return 0;
		
	}
	
	for (i=0;i<tam2; i++) {
		
			printf("cont %d \n", cont);
		
		if (s[j] == s2[i]) {
			
			k = i;
			p = j;
			printf("entrou aqui");
			while (s[p] == s2[k]) {
				
				cont++;
				p++;
				k++;
				
				printf("cont %d \n", cont);
				printf("tam %d \n", tam);
				
				if (cont == tam) {
					
					
					return 1;
					
					
				} 
				
			} cont = 0;

			
		}

	}
}
		
void main ()
{
	char s[TAM];
	char s2[TAM] ;
	int res;
	
	printf("Digite a sua palavra de s1: ");
	fflush(stdin);
	gets(s);
	
	printf("Digite a sua palavra de s2: ");
	fflush(stdin);
	gets(s2);
	
	res=verificar(s, s2);
	
	if(res==1)
	{
		printf("eh sub");
	}
		else
	
		{
			printf("n eh sub");
		}
	
}
