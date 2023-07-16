//função pow

#include<stdio.h>
#include<math.h> //tem que usar essa biblioteca

void main ()
{
	int num, result, raiz;
	
	printf("informe um numero que sera dobrado e raiz: ");
	scanf("%d", &num);
	
	result = pow(num,2);
	
	raiz = pow(num, 1.0/2.0);
	
//Parti do seguinte principio: A raiz cubica de X é igual a X^(1/3).

//Portanto, o seguinte codigo calcula a raiz cubica de X:

//pow(x, 1.0/3.0);

//raizCubica = cbrt(num);
//raizQuadrada = sqrt(num):
	
	printf("O valor e' %d\n", result);
	printf("O valor e' %d", raiz);
}
