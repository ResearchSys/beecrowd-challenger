#include <stdio.h>
#include <string.h>

int main() {
    
    int n, n1, n2;
    char *token, linha[12];
    scanf("%i ", &n);
    
    while (n--) {
        scanf("%s ", linha);
        if (!strcmp(linha, "P=NP"))
            printf("skipped\n");
        else {
            token = strtok(linha, "+");
            n1 = atoi(token);
            token = strtok(NULL, "+");
            n2 = atoi(token);
            printf("%d\n", n1+n2);
        }
    }
    
    return 0;
}

