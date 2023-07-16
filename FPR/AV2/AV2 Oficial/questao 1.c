/*Questão 01 [2,5 pontos]:
Desenvolver uma função recursiva que, dado um número inteiro n1, “crie” um novo número inteiro, n2, consistindo no
primeiro com os algarismos invertidos.
Exemplos:
n1 = 4258 n2 será igual a 8524
n2 = 12625 n2 será igual a 52621*/

#include<stdio.h>

int criarN2(int n1);
int criarN2Rec(int n1, int n2);

void main()
{
    int n1, n2;
    
    printf("Digite o numero n1: ");
    scanf("%d", &n1);
    
    n2=criarN2(n1);
    
    printf("%d", n2);
}

int criarN2(int n1)
{
	int n2=0;
	
    return criarN2Rec(n1, n2);
}

int criarN2Rec(int n1, int n2)
{
	//declaração das variaveis
	int aux, aux2;
	
    if(n1==0) //verificando se n1 chegou ao fim
	{
        return n2; //retornando o valor de n2
    }
	else
	{
        aux=n1%10; //aux recebe o valor do ultimo elemento de n1
        aux2=(n2*10)+aux; //fazendo o valor de n2 subir uma casa decimal e somar com aux
        
        return criarN2Rec(n1/=10, n2=aux2); //n1 retira o elemento do final, n2 recebe
    }
}
