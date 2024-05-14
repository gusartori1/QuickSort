#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "particionador.h"
#include "particionamento.h"
#include "quick_func.h"



int main()
{





    FILE *entrada = fopen("entrada.txt", "r");
    FILE *saida = fopen("saida-quicksort.txt", "w");

    if (entrada == NULL || saida == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    int tamanho, i;
    int inicio, fim;
    float total;

    fscanf(entrada, "%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }


    for (i = 0; i < tamanho; i++)
    {
        fscanf(entrada, "%d", &vetor[i]);
    }

    fclose(entrada);
    inicio = clock();
    quicksort_lomuto(vetor, 0, tamanho - 1);
    fim = clock();
    total = (fim - inicio);

    printf("O tempo total para execucao da funcao foi de %f ", total );

    for (i = 0; i < tamanho; i++)
    {
        fprintf(saida, "%d ", vetor[i]);
    }




    fclose(saida);
    free(vetor);  // Free the allocated memory

    return 0;
}
