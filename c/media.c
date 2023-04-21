#include <stdio.h>

int main(){
    double A, B, mediap;
    double p1 = 3.5, p2 = 7.5;

    printf("");
    scanf("%lf%lf", &A, &B);

    mediap = ((A * p1) + (B * p2)) / (p1 + p2);

    printf("MEDIA = %.5f\n", mediap);

    return 0;
}
