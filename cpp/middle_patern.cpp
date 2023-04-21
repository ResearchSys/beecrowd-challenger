#include <iostream>

int main() {
    
    unsigned short int h, z, l;
    
    std::cin >> h >> z >> l;
    
    if ((z > h && h > l) || (z < h && h < l))
        std::cout << "huguinho";
    else if ((h > z && z > l) || (h < z && z < l))
        std::cout << "zezinho";
    else
        std::cout << "luisinho";

    std::cout << std::endl;
    
    return 0;
}
