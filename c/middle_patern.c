#include <stdio.h>

int main() {
    
    unsigned short int h, z, l;
    
    scanf("%hu %hu %hu", &h, &z, &l);
    
    if ((z > h && h > l) || (z < h && h < l))
        printf("huguinho");
    else if ((h > z && z > l) || (h < z && z < l))
        printf("zezinho");
    else
        printf("luisinho");

    printf("\n");
    
    return 0;
}
