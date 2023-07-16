#include<stdio.h>

int main ()

{
	
   float imc;
   float peso;
   float altura;
   
    printf("digite seu peso:\n");
    scanf ("%f",&peso );
    
    printf("digite sua altura:\n");
    scanf ("%f",&altura);
    
    altura = altura*altura;
    imc = peso/altura;
    
    printf("seu imc e: %.2f", imc);


   
    
    
    
    
	
	
}
