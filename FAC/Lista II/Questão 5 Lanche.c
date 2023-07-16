/*O cardápio de uma lanchonete é
o seguinte:
Especificação Código Preço
Cachorro quente 100 3,50
Bauru simples 101 4,50
Bauru com ovo 102 5,20
Hamburger 103 3,00
Cheeseburger 104 4,00
Refrigerante 105 2,50
Escrever um algoritmo que obtenha o código
do item pedido, a quantidade e calcule o valor
a ser pago.
Considere que, a cada execução do algoritmo,
somente será calculado o valor relacionado a
um item.*/

#include <stdio.h>

void main ()
{
	int codigoPedido, quantidade;
	float total;
	
	printf("Cachorro quente:\ncodigo: 100\npreco :3,50\n\nBauru simples:\ncodigo: 101\npreco: 4,50\n\nBauru com ovo:\ncodigo: 102\npreco: 5,20\n\nHamburger:\ncodigo: 103\npreco: 3,00\n\nCheeseburger:\ncodigo: 104\npreco: 4,00\n\nRefrigerante:\ncodigo: 105\npreco: 2,50\n\n");
	
	printf ("Escolha o codigo do seu Pedido: ");
	scanf ("%d", &codigoPedido);
	
	printf ("Escolha a quantidade do Pedido: ");
	scanf ("%d", &quantidade);
	
	switch (codigoPedido)
	{
		case 100:
			total = quantidade*3.50;
			printf ("Valor total do seu pedido: %.2f", total);
			break;
		case 101:
			total = quantidade*4.50;
			printf ("Valor total do seu pedido: %.2f", total);
			break;
		case 102:
			total = quantidade*5.20;
			printf ("Valor total do seu pedido: %.2f", total);
			break;
		case 103:
			total = quantidade*3.0;
			printf ("Valor total do seu pedido: %.2f", total);
			break;
		case 104:
			total = quantidade*4.0;
			printf ("Valor total do seu pedido: %.2f", total);
			break;
		case 105:
			total = quantidade*2.50;
			printf ("Valor total do seu pedido: %.2f", total);
			break;
			
    }
			
	
	
	
	
	
	
}
