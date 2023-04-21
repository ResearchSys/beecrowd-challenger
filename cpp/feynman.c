#include <stdio.h>
int main() {
    
    int n, r, i;
    while (scanf("%d", &n) != EOF) {
        
        if (!n)
            exit(0);
            
        r = 1;
        for (i = 2; i <= n; i++)
            r += i*i;
        
        printf("%d\n", r);
    }

    return 0;
}
