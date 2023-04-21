#include <stdio.h>
int main() {
    int n;
    do {
        scanf("%i", &n);
        int i = 1;
        if (n == 0) exit(0);
        while (i != n) {
            printf("%i ", i++);
    }
    printf("%i\n", i);;
    } while (n!=0);
    return 0;
}
