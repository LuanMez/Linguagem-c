#include<stdio.h>

//fun��o dos multiplos
void multiplo(float n1,int n2,int *men,int *mai)
{
	//declara��o das variaveis
	int arm_menor=0, arm_maior=0, i;
	
	//calculo do maior multiplo
	for(i=0;i<=n1;i+=n2)
	{
		if(n1>=n2)
		{
			arm_maior+=n2;
		}
	}
	//armazenar o maior numero no menor
	arm_menor+=arm_maior;
	
	//diminuir o menor numero pelo numero real
	arm_menor-=n2;
	
	//atribuindo os resultados aos par�metros de sa�da	
	*men=arm_menor;
	*mai=arm_maior;
}

void main()
{
	//declara��o das variaveis
	float num1;
	int num2, menor, maior; 
	
	//leitura das variaveis
	printf("Insira um numero real: ");
	scanf("%f", &num1);
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &num2);
	
	//invoca��o da fun��o
	multiplo(num1,num2,&menor,&maior);
	
	//exibi��o do maior multiplo e menor
	printf("Maior multiplo:%d", maior);
	printf("\nMenor multiplo:%d", menor);
}
