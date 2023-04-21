#include <stdio.h>
int main() {
    int x, y, m, a, b;
    while (scanf("%d %d %d", &x, &y, &m) != EOF) {
        while (m--) {
            scanf("%d %d", &a, &b);
            if ((a <= x && b <= y) || (a <= y && b <= x))
                printf("Sim\n");
            else
                printf("Nao\n");
        }
    }
    return 0;
}
