#include <stdio.h>

    #define TAM_MAX 10

    void ImprimeVet (int Tam, int Vet[TAM_MAX])
    {
        int i;
        for (i=0; i< Tam; i++)
        {
          printf("%d", Vet[i]);
        }    
    }

    int main()
    {
      int Notas[TAM_MAX];

        ImprimeVet(TAM_MAX, Notas); // Passa o vetor 'Notas' como
                                     // parâmetro

        return 0;

    }
