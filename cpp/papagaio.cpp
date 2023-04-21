#include <iostream>

int main() {
    
    std::string palavra;
 
    while (getline(std::cin, palavra)) {
        
        switch(palavra[0]) {
            case 'e': std::cout << "ingles" << std::endl; break;
            case 'd': std::cout << "frances" << std::endl; break;
            case 'n': std::cout << "portugues" << std::endl; break;
            default: std::cout << "caiu" << std::endl; break;
        }
    
    }

    return 0;
}
