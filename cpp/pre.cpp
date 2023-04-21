#include <iostream>

int modulo(int a, int b) {
    int m = a % b;
  
    if (m < 0)
        m = (b < 0) ? m - b : m + b;

    return m;
}

int main() {
    
    int a, b, d, r;
    
    std::cin >> a >> b;
    
    r = modulo(a, b);
    d = (a - r) / b; 
    std::cout << d << " " << r << std::endl;
    
    return 0;
}

