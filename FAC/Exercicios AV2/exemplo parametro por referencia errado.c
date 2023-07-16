#include <stdio.h>

void incrementa_num(int num)
{
	num = num + 1;
}

int main()
{
	int num;
	
	num=10;
	incrementa_num(num);
	printf("Num: %d\n", num);
}
