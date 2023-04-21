#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
    
    int n, i, j;
    int p[1000000], pares[1000000];
    
    while (1) {
        
        scanf("%d", &n);
        
        if (!n)
            break;
        
        for (i = 0; i < 2 * n; i++)
            scanf("%d", &p[i]);
        
        qsort(p, 2*n, sizeof(int), cmpfunc);
        
        for (i = 0, j = 2 * n - 1; i < n; i++, j--)
            pares[i] = p[i] + p[j];
        
        qsort(pares, n, sizeof(int), cmpfunc);
        printf("%d %d\n", pares[n-1], pares[0]);
        
        memset(p, 0, sizeof(p));
        memset(pares, 0, sizeof(pares));
    }

    return 0;
}

