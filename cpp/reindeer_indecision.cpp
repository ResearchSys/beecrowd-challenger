#include <iostream>

using namespace std;

int main() {
    int renas[9], indice = 0, acumulador = 0;
    
    while (indice < 9) {
        cin >> renas[indice];
        acumulador += renas[indice];
        indice++;
    }

    switch (acumulador % 9) {
        case 1: cout << "Dasher" << endl; break;
        case 2: cout << "Dancer" << endl; break;
        case 3: cout << "Prancer" << endl; break;
        case 4: cout << "Vixen" << endl; break;
        case 5: cout << "Comet" << endl; break;
        case 6: cout << "Cupid" << endl; break;
        case 7: cout << "Donner" << endl; break;
        case 8: cout << "Blitzen" << endl; break;
        default: cout << "Rudolph" << endl; break;
    }

    return 0;
}
