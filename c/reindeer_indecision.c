#include <stdio.h>

int main() {
    int renas[9], indice = 0, acumulador = 0;
    
    while (indice < 9) {
        scanf("%i", &renas[indice]);
        acumulador += renas[indice];
        indice++;
    }

    switch (acumulador % 9) {
        case 1: printf("Dasher\n"); break;
        case 2: printf("Dancer\n"); break;
        case 3: printf("Prancer\n"); break;
        case 4: printf("Vixen\n"); break;
        case 5: printf("Comet\n"); break;
        case 6: printf("Cupid\n"); break;
        case 7: printf("Donner\n"); break;
        case 8: printf("Blitzen\n"); break;
        default: printf("Rudolph\n"); break;
    }

    return 0;
}
