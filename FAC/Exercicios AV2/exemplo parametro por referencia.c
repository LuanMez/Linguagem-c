#include <stdio.h>

//parametro por referencia se usa *num se não funciona
void incrementa_num(int *num)
{
	//tudo tem que ter *num
	*num = *num + 1;
}

int main()
{
	//esse num é diferente do *num
	int num;
	
	//declaração do valor de num
	num=10;
	
	//invocou a função *num pegou o valor int num = 10 e fez o calculo
	incrementa_num(&num);
	printf("Num: %d\n", num);
}
