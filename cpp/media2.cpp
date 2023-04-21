#include <iostream>

int main(){
    double A, B, C, mediap;
    int p1 = 2, p2 = 3, p3 = 5;

    std::cout << "" << std::endl;
    std::cin >> A >> B >> C;

    mediap = ((A * p1) + (B * p2) + (C * p3)) / (p1 + p2 + p3);

    std::cout.precision(2);
    std::cout << "MEDIA = " << mediap << std::endl;

    return 0;
}
