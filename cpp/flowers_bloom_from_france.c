#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int r, quant;
    char linha[2700], primeiro, proximo, *token;
    while (fgets(linha, 3000, stdin) != NULL) {
        r = 1;
        primeiro = toupper(linha[0]);
        if (primeiro == '*')
            exit(0);
        quant = 0;
        token = strtok(linha, " \n");
        while (token != NULL) {
            proximo = toupper(token[0]);
            token = strtok(NULL, " \n");
            if (isalpha(primeiro) && isalpha(proximo) && primeiro != proximo)
                r = 0;
            quant++;
        }
        if (r || !quant)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
