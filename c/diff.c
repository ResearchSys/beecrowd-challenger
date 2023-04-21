#include <stdio.h>

int main(){
    int A, B, C, D, diff;

    printf("");
    scanf("%d%d%d%d", &A, &B, &C, &D);

    diff = ((A * B) - (C * D));

    printf("DIFERENCA = %d\n", diff);

    return 0;
}
