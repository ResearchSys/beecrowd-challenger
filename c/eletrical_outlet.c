#include <stdio.h>

int main() {
    
    int n, k, o, i, acum;
    
    scanf("%d", &n);
    
    while (n--) {
        acum = 0;
        scanf("%d", &k);
        for (i = 0; i < k; i++) { 
            scanf("%d", &o);
            acum += o;
        }
        printf("%d\n", acum - k + 1);
    }

    return 0;
}
