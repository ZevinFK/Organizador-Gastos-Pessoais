#include "Reorganizacao.h"
#include "Particionamento.h"
#include "Gasto.h"

void quickSort(Gasto gastos[], int inicio, int fim) 
{
    if(inicio < fim) {
        int p = particionar(gastos, inicio, fim);

        quickSort(gastos, inicio, p - 1);
        quickSort(gastos, p + 1, fim);
    }
}