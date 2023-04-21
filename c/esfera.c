#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(int argc, char **argv){
    double raio, volume;

    scanf("%lf", &raio);

    volume = (4.0 * PI * (raio * raio * raio)) / 3;
    printf("VOLUME = %.3f\n", volume);

    return 0;
}
