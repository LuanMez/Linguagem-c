/*A tabela abaixo resume os valores unitários
dos produtos vendidos por determinada
loja:
Código do Produto Valor unitário
101 3,50
102 5,00
103 7,80
104 5,00
105 8,20
106 6,40
107 4,75
108 3,60
109 6,00
110 4,30
Pede-se o desenvolvimento de uma função
que, dado um código de produto e uma
quantidade a ser adquirida, determine o
valor total da compra.
Nota: caso o código seja inválido (ou seja, não
esteja na tabela), a função deverá retornar o
valor -1.
Exemplo 1:
Código: 101 + Quantidade: 3 ? Valor: 10,50
Exemplo 2:
Código: 111 + Quantidade: 4 ? Valor: -1*/

#include<stdio.h>

float prodquant (int produto, int quantidade)
{
	float valor;
	
	switch(produto)
	{
		case 101:
			valor=3.50;   //poderia ser valor=3.50*quantidade;
			valor*=quantidade;
			break;
			
		case 102:
			valor=5.00;
			valor*=quantidade;
			break;
			
		case 103:
			valor=7.80;
			valor*=quantidade;
			break;
			
		case 104:
			valor=5.00;
			valor*=quantidade;
			break;
			
		case 105:
			valor=8.20;
			valor*=quantidade;
			break;	
			
		case 106:
			valor=6.40;
			valor*=quantidade;
			break;
			
		case 107:
			valor=4.75;
			valor*=quantidade;
			break;
			
		case 108:
			valor=3.60;
			valor*=quantidade;
			break;
			
		case 109:
			valor=6.00;
			valor*=quantidade;
			break;
			
		case 1010:
			valor=4.30;
			valor*=quantidade;
			break;
			
		default:
		valor = -1;	//retornar -1 se o codigo não existir							
	}
	return valor;
}

void main ()
{
	int prod, quant;
	float resultado;
	
	printf("Insira o codigo do produto desejado e depois a quantidade: ");
	scanf("%d %d", &prod, &quant);
	
	resultado=prodquant(prod, quant);
	
	printf("Valor: %.2f", resultado);
}
