#include <stdio.h>
#include "particionador.h"
#include "particionamento.h"

int partition_lomuto(int C[], int inicio, int fim)
{
    int chave = C[inicio];
    int storeindex = inicio + 1; // Index of smaller element
    for (int i = inicio+1; i <= fim; i++)
    {
// If current element is smaller than or equal to pivot
        if (C[i] < chave)
        {
            trocar_elementos(C, i, storeindex);
            storeindex++; // increment index of smaller element
        }
    }
    trocar_elementos(C, inicio, (storeindex-1));

    return (storeindex-1);

}
//--------------------------------------------------------------
int partition_hoare(int C[], int left, int right) {
//--------------------------------------------------------------
    int chave, i, j;
    chave = C[left]; i = left; j = right;

    while (i<j) {
        //cout << "\nloop = " << loopcount++ << "i - " << i << " j = " << j << endl;
        while(C[j] > chave && i < j) j--;
        C[i] = C[j];
        while(C[i] <= chave && i < j) i++ ;
        C[j] = C[i];
    }
    C[j] = chave;
    return i;
}
