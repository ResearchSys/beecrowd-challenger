#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, n1, n2;
    string linha, a, b;
    cin >> n;
    
    while (n--) {
        cin >> linha;
        if (!linha.compare("P=NP"))
            cout << "skipped" << endl;
        else {
            int pos = linha.find("+");
            n1 = stoi(linha.substr(0, pos));
            n2 = stoi(linha.substr(pos+1, linha.size()));
            cout << n1 + n2 << endl;
        }
    }
    
    return 0;
}
