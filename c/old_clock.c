#include <stdio.h>

int main() {
    
    int h, m, respostaH, respostaM;
    
    while (scanf("%i %i", &h, &m) != EOF)
        printf("%02i:%02i\n", (int) h / 30, (int) m / 6);

    return 0;
}
