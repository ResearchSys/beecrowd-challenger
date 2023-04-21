#include <iostream>
int main() {
    int x, y, m, a, b, m1, m2;
    while (std::cin >> x >> y >> m) {
        m1 = (x < y? x : y);
        while (m--) {
            std::cin >> a >> b;
            m2 = (a < b? a : b);
            if (a*b > x*y || (a > x && a > y) || (b > x && b > y) || m2 > m1)
                std::cout << "Nao";
            else
                std::cout << "Sim";
            std::cout << std::endl;
        }
    }
    return 0;
}
