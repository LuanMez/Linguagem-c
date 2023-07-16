/*
			Monitoria
QUESTÃO 04: Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.
*/
#include<stdio.h>

int main(){
	int i,contNegativo=0, contPositivo=0; 
	float numero, soma=0, media;
	for(i=1;i<=5;i++){
		printf("entre com um numero: ");
		scanf("%f", &numero);
		if(numero<0){
			contNegativo++;
		}else{
//			soma=soma+numero;
			soma+=numero;
			contPositivo++;
		}
	}
	if(contPositivo==0){
		printf("nao exite numero positivo na lista\n");
	}else{
		media=(soma/contPositivo);
		printf("media de num positivos: %.1f", media);
	}
	printf("quantidade de num negativo: %d\n", contNegativo);
		
}
