#include <stdlib.h>
#include <stdio.h>
int compara(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b);
}
int main() {
    int n, q, i, consultas[10000], valores[10000], caso = 1, inicio, meio, fim;
    while (scanf("%d %d", &n, &q) != EOF) {
        if (!n && !q)
            break;
        for (i = 0; i < n; i++)
            scanf("%d", &valores[i]);
        for (i = 0; i < q; i++)
            scanf("%d", &consultas[i]);
        qsort(valores, n, sizeof(int), compara);
        printf("CASE\# %d:\n", caso++);
        for (i = 0; i < q; i++) {
            inicio = 0;
            fim = n - 1;
            meio = (inicio + fim) / 2;
            while (inicio <= fim) {
                if (valores[meio] < consultas[i])
                    inicio = meio + 1;
                else if (valores[meio] == consultas[i]) {
                    while (valores[meio - 1] == consultas[i] && meio)
                        meio--;
                    printf("%d found at %d\n", consultas[i], meio+1);
                    break;
                }
                else
                    fim = meio - 1;
                meio = (inicio + fim)/2;
            }
            if (inicio > fim)
                printf("%d not found\n", consultas[i]);
        }
    }
    return 0;
}
