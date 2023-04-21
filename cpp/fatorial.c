#include <stdio.h>
int main() {
    int numeroACM, digitos, fatorial, resposta;
    while(1) {
        scanf("%i", &numeroACM);
        if (numeroACM == 0)
            break;
        digitos = 1;
        fatorial = 1;
        resposta = (numeroACM % 10) * fatorial;        
        while (numeroACM > 9) {
            numeroACM /= 10;
            digitos++;
            fatorial *= digitos;
            resposta += (numeroACM % 10) * fatorial;
        }
        printf("%i\n", resposta);
    }

    return 0;
}
