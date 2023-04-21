#include <stdio.h>

int modulo(int a, int b) {
    int m = a % b;
  
    if (m < 0)
        m = (b < 0) ? m - b : m + b;

    return m;
}

int main() {
    
    int a, b, d, r;
    
    scanf("%i %i", &a, &b);
    
    r = modulo(a, b);
    d = (a - r) / b; 
    printf("%i %i\n", d, r);
    
    return 0;
}
