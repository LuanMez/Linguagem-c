/*Desenvolver uma função que, dada uma string
str, substitua uma substring s1 de str (definida
pelas posições inicial e final) por outra string,
s2.*/

#include<stdio.h>
#include<string.h>

//prototipo da função
void substituir (char str[], char s2[], int inicios1, int finals1);

//main
void main ()
{
	//declaração das variaveis
	char str[30];
	char s2[30];
	int inicios1, finals1;
	
	//leitura das string str
	printf("Digite a frase da str: ");
	fflush(stdin);
	gets(str);
	
	//leitura das string s2
	printf("Digite a palavra da s2: ");
	fflush(stdin);
	gets(s2);
	
	//leitura das variaveis inicios1 e finals1
	printf("Digite a posicao inicial e final de s1: ");
	
	//armazenando nas varaiveis
	scanf("%d %d", &inicios1, &finals1);
	
	//implementação da função de substituir
	substituir(str, s2, inicios1, finals1);
	
	puts(str); //verificando se ocorreu tudo bem na troca
	
}

void substituir(char str[], char s2[], int inicios1, int finals1) {
	// Declaração das variáveis
	int i, finalStr = strlen(str), finalS2 = strlen(s2), intervalo = (finals1 - inicios1) + 1, dif = finalS2 - intervalo;
	
	if (finalStr != 0 && inicios1 >= 0 && finals1 > inicios1 && finals1 < finalStr) {
		if (dif > 0) {
			for (i = finalStr; i >= finals1; i--) {
				str[i + dif] = str[i];
			}
		} else {
			if (dif < 0) {
				for (i = finals1 + 1; i <= finalStr; i++) {
					str[i + dif] = str[i];
				}
			}
			
			for (i = 0; i < finalS2; i++) {
				str[i + inicios1] = s2[i];
			}
		}	
	}
}
