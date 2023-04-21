#include <stdio.h>
int main() {
    int n, escadinha[1001], v[1001], i, j = 0, dif;
    scanf("%i", &n);
    for (i = 0; i < n; i++)
        scanf("%i", &v[i]);
    if (n == 1 || n == 2)
        printf("1\n");
    else {
        dif = v[1] - v[0];
        escadinha[0] = 2;
        for (i = 1; i < n; i++) {
            if (v[i] - v[i-1] == dif)
                escadinha[j]++;
            else {
                j++;
                escadinha[j] = 1;
            }
            dif = v[i] - v[i-1];
        }
        printf("%i\n", j + 1);
    }
    return 0;
}
