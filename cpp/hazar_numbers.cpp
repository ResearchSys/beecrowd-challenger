#include <iostream>

int main() {
    
    long long unsigned int n, m, r;
    bool sorte = false;

    std::cin >> n;    
    
    m = n;
    while (m > 0) {
        r = m % 10;
        if (r == 3 and (m/10)%10 == 1) {
            sorte = true;
            break;
        }
        m /= 10;
    }
    
    std::cout << n << (!sorte? " NO" : "") << " es de Mala Suerte" << std::endl;

    return 0;
}
