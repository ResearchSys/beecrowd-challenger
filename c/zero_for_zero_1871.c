#include <stdio.h>

int main() {

    int n, m, resultado, indice;
    char *resposta = (char *) malloc(sizeof(char) * 11);

    while (1) {
        
        scanf("%i %i ", &n, &m);
        
        if (n == 0 && m == 0) exit(0);
        
        resultado = n + m;
        
        snprintf(resposta, 11, "%d", resultado);
        
        indice = 0;
        while (resposta[indice] != '\0') {
            if (resposta[indice] != '0')
                printf("%c", resposta[indice]);
                
            indice++;
        }
        
        printf("\n");
        
    }

    return 0;
}
