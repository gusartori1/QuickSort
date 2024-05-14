#include<stdio.h>
#include "particionador.h"

int mediana_de_tres(int vetor[], int inicio, int fim)
{
    int meio = (inicio + fim) / 2;
    if (vetor[inicio] > vetor[fim]) {
        if (vetor[inicio] < vetor[meio])
            return inicio;
        else if (vetor[meio] < vetor[fim])
            return fim;
        else
            return meio;
    } else {
        if (vetor[inicio] > vetor[meio])
            return inicio;
        else if (vetor[meio] > vetor[fim])
            return fim;
        else
            return meio;
    }
}

void trocar_elementos(int vetor[], int i, int j)
{
    int temp = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = temp;

}
