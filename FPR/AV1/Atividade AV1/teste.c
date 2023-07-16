/*
Desenvolver uma função que, dada uma string
str, substitua uma substring s1 de str (definida
pelas posições inicial e final) por outra string,
s2. Exemplo: Substituir a substring s1 de str que seria espantalho,
definida pelas posições
inicial (=4) e final (=5)
pela string s2 igual a “voce”, ficaria espavocealho
*/

#define TAM 10
#include <stdio.h>
#include <string.h>

int verificar (char s[], char s2[], int sub1, int sub2) {
 
 int i;
 int tams=strlen(s), tams2=strlen(s2); //tamanho das strings
 int tams1s2 = (sub2-sub1)+1; //tamanho da substring original
 int diferenca = tams2 - tams1s2; // diferenca do sub que será adicionada pela substring original
 
 
 if (tams == 0 && sub1 < 0 && sub2 < sub1)  
 
 {
        return 0;
    }
  
 if (diferenca > 0) 
 { 
  for(i=tams; i>sub2; i--) { //string que começa no maior e vai até a posição dps do sub2
   
   s[i+diferenca] = s[i];

  } 
 } 
 
 else if (diferenca < 0) 
 {
  for(i=sub2+1; i<=tams; i++) { //vou da proxima posiçao (depois da posi sub2) até o final da string

   s[i+diferenca] = s[i];
   
  }
 
 }

 for(i=0; i<tams2; i++) 
 
 {
   
  s[i+sub1] = s2[i];
 
 }

}

void main ()
{
 char s[20];
 char s2[20];
 int res, sub1, sub2;
 
 printf("Digite a string: ");
 fflush(stdin);
 gets(s);
 
 printf("Digite a posicao inicial e final da sua substring de s1: ");
 fflush(stdin);
 scanf("%d %d", &sub1, &sub2);
 
 printf("Digite o que deseja adicionar: ");
 fflush(stdin);
 gets(s2);
 
 
 res=verificar(s, s2, sub1, sub2);
 
 if (res==0) {
  
  printf("Inválido!!");
  
 } else {
  
  puts(s);
  
 }

}
