/*Desenvolver uma função que, dados um
número real num1 e um valor inteiro
num2, determine o maior múltiplo de
num2 que seja inferior ou igual a num1,
assim como o menor múltiplo de num2 que
seja maior do que num1, conforme
exemplos apresentados na tabela abaixo:
Exemplos Num1 Num2 Valores calculados
Ex. 1 7,85 3 6 e 9
Ex. 2 10,0 2 10 e 12*/

#include<stdio.h>

void multiplos( float n1, int n2, int *m1, int *m2)
{
	int i, menor, maior;
	
	for(i=0; i<=n1; i+=n2)
	{
		menor=i;
	}
	maior=menor+n2;
	
	*m1=menor;
	*m2=maior;
}

void main ()
{
	float num1;
	int num2, mul1,mul2;
	
	printf("Digite um numero real e um numero inteiro: ");
	scanf("%f %d", &num1, &num2);
	
	multiplos(num1, num2, &mul1, &mul2);
	
	printf("O maior multiplo menos que num1 %d e o maior %d", mul1, mul2);
}
