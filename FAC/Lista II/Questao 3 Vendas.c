/*QUEST�O 03: As vendas parceladas se
tornaram uma �tima op��o para os lojistas que,
a cada dia, criam novas promo��es para tentar
conquistar novos clientes. Fa�a um algoritmo
que permita ao lojista informar o pre�o do
produto e receber as seguintes informa��es:
a) O valor com 10% de desconto para
pagamento � vista;
b) O valor da presta��o para parcelamento
sem juros, em 5x;
c) O valor da presta��o para parcelamento
com juros, em 10x, com 20% de acr�scimo
no valor do produto.*/

#include <stdio.h>

void main ()

{
	//declaracao das variaveis
	float preco, vista, parce5, parce10;
	
	//leitura do valor
	printf ("Digite o Valor do Produto: ");
	scanf ("%f", &preco);
	
	//calculo das promocoes
	vista = preco - (preco*0.1);
	parce5 = preco/5;
	parce10 = (preco + (preco*0.2))/10;
	
	//exibir preco a vista
	printf ("Valor a vista do seu produto: \n%.2f\n", vista);
	
	//exibir preco pracelado em 5x
	printf ("Valor a parcelado em 5x do seu produto: \n%.2f\n", parce5);
	
	//exibir preco parcelado em 10x
	printf ("Valor a parcelado em 10x do seu produto: \n%.2f\n", parce10);
	
	
	
	
	
	
	
	
	
}
