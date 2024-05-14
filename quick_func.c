#include <stdio.h>
#include "particionador.h"
#include "particionamento.h"


void quicksort_lomuto(int vetor[], int inicio, int fim)
{


    int p;

    if (fim >= inicio)
   {



        p =  mediana_de_tres(vetor, inicio, fim);
        trocar_elementos(vetor, p, inicio);
        p = partition_lomuto(vetor, inicio, fim);


        quicksort_lomuto(vetor, inicio, p - 1);

        quicksort_lomuto(vetor, p + 1, fim);

    }
}
