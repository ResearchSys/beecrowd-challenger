#include <stdio.h>

int main() {
    
    int n, fibo[40], contador;
    scanf("%i", &n);
    
    fibo[0] = 1;
    fibo[1] = 1;
    contador = 2;
    
    while (contador < n) {
        fibo[contador] = fibo[contador-1] + fibo[contador-2];
        contador++;
    }
    
    if (n > 1) {
        while (contador > 1) {
            printf("%i ", fibo[--contador]);
        }
    }
    printf("%i\n", fibo[0]);
    
    return 0;
}
