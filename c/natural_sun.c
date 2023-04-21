#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int a,b,soma,i;
        scanf("%lld %lld", &a, &b);
        soma =  (b - a + 1)*(a + b)/2;
        printf("%lld\n", soma);
    return 0;
}
