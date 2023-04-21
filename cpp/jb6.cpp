#include <iostream>

using namespace std;

int viraNumero(string str) {
    if (!str.compare("pedra"))
        return 0;
    if (!str.compare("papel"))
        return 1;
    return 2;
}

int main() {
    
    string dodo, leo, pepper;
    while (cin >> dodo >> leo >> pepper) {
        int r;
        int d, l, p;
        d = viraNumero(dodo);
        l = viraNumero(leo);
        p = viraNumero(pepper);
        if ((d == 1 && !l && !p)
        || (!d && l==2 && p==2)
        || (d==2 && l==1 && p==1))
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        else if ((!d && l==1 && !p)
        || (d==2 && !l && p==2)
        || (d==1 && l==2 && p==1))
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        else if ((!d && !l && p==1)
        || (d==2 && l==2 && !p)
        || (d==1 && l==1 && p==2))
            cout << "Urano perdeu algo muito precioso..." << endl;
        else
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
    }
    
    return 0;
}
