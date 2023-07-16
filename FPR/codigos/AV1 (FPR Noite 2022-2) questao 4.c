#include<stdio.h>

int somaTodos(int num);

void main()
{
    int num, resultado;

    printf("Digite o valor de num: ");
    scanf("%d", &num);

    resultado = somaTodos(num);

    printf("O valor da soma dos algarismos de num eh %d", resultado);
}

int somaTodos(int num)
{
    if (num==0)
    {
        return 0;
    }
    else
    {
        return(num%10)+somaTodos(num/10);
    }
}
