#include <stdio.h>

int main() {
    
    unsigned int n;
    unsigned int total;
    unsigned int brancas;
    unsigned int pretas;
    
    scanf("%u", &n);
    
    total = n * n;
    pretas = total / 2;
    brancas = total - pretas;
    
    printf("%u casas brancas e %u casas pretas\n", brancas, pretas);

    return 0;
}
