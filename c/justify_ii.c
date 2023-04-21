#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n, i, j, k, maior, pos, lock = 0, tamLinhas[100], palavrasPorLinha[100];
    char palavras[100][60][60], resposta[100][60], linhaFinal[100][60];
    char *linha = (char *) malloc(60 * sizeof(char *));
    char *token;
    while (scanf("%i ", &n) != EOF) {
        memset(tamLinhas, 0, n);
        maior = 0;
        if (!n)
            break;
        if (lock)
            printf("\n");
        else
            lock = 1;
            
        for (i = 0; i < n; i++) {
            fgets(linha, 60, stdin);
            token = strtok(linha, " \n");
            j = 0;
            while (token != NULL) {
                if (strlen(token) > 0) {
                    strncpy(palavras[i][j++], token, 60);
                }
                token = strtok(NULL, " \n");
            }
            palavrasPorLinha[i] = j;
        }
        for (i = 0; i < n; i++) {
            strcpy(linhaFinal[i], palavras[i][0]);
            for (j = 1; j < palavrasPorLinha[i]; j++) {
                    strcat(linhaFinal[i], " ");
                    strcat(linhaFinal[i], palavras[i][j]);
            }
            tamLinhas[i] = (int) strlen(linhaFinal[i]);
            strcpy(resposta[i], linhaFinal[i]);
        }
        for (i = 0; i < n; i++)
            if (tamLinhas[i] > maior)
                maior = tamLinhas[i];
        for (i = 0; i < n; i++)
                printf("%*s\n", maior, resposta[i]);
        
        memset(palavras, 0, sizeof(palavras));
        memset(resposta, 0, sizeof(resposta));
    }
    return 0;
}
