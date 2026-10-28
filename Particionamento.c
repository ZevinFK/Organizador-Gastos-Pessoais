#include "Particionamento.h"
#include "Gasto.h"

int particionar(Gasto gastos[], int inicio, int fim)
{
    Gasto pivo = gastos[fim];
    int i = inicio - 1;

    for(int j = inicio; j < fim; j++)
    {
        if(gastos[j].valor <= pivo.valor)
        {
            i++;

            Gasto temp = gastos[i];
            gastos[i] = gastos[j];
            gastos[j] = temp;
        }
    }

    Gasto temp = gastos[i + 1];
    gastos[i + 1] = gastos[fim];
    gastos[fim] = temp;

    return i + 1;
}