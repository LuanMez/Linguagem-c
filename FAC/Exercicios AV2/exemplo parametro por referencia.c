#include <stdio.h>

//parametro por referencia se usa *num se n�o funciona
void incrementa_num(int *num)
{
	//tudo tem que ter *num
	*num = *num + 1;
}

int main()
{
	//esse num � diferente do *num
	int num;
	
	//declara��o do valor de num
	num=10;
	
	//invocou a fun��o *num pegou o valor int num = 10 e fez o calculo
	incrementa_num(&num);
	printf("Num: %d\n", num);
}
