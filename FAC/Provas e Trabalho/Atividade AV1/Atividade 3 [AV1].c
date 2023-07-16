/*Implementar uma função que, dados 3
valores reais (n1, n2, n3), compare-os e
altere seus conteúdos, de forma que n1
armazene o maior elemento, n2 o segundo
maior e n3 o menor deles.*/

#include <stdio.h>

void testando (float *n1, float *n2, float *n3)
{
	float maior = *n1, menor = *n1, meio = *n1;
	
	if (*n2 >= maior)
	{
		
		maior = *n2;
		
	} 
	else if(*n2<=menor) {
		
		menor = *n2;
		
	} if (*n3 >= maior) {
		
		maior = *n3;
		
	}  else if(*n3<=menor) {
		
		menor = *n3;
		
	} 
		
	 if (*n2 > menor && *n2 < maior) {
		
		meio = *n2;
		
	} if (*n3 > menor && *n3 < maior) {
		
		meio = *n3;
		
	} if (*n2==*n3) {
		
		meio = *n2; 
	}				
	
		*n1 = maior;
 		*n2 = meio;
 		*n3 = menor;
 		

}

void main ()
{
	//declaração de variaveis
	float numero1, numero2, numero3;
	
	//exibindo a mensagem na tela
	printf("Insira um numero: ");
	scanf("%f", &numero1);
	
	printf("Insira um numero: ");
	scanf("%f", &numero2);
	
	printf("Insira um numero: ");
	scanf("%f", &numero3);
	
	//invocando a função
	testando (&numero1, &numero2, &numero3);
	
	//teste para ver se está funcionado
	//printf("Resultado:maior:%.1f\nmedio:%.1f\nmenor:%.1f\n", numero1, numero2, numero3);
}
