#include <iostream>

using namespace std;

int main() {

    int n, m, resultado, indice;
    string resposta;

    while (1) {
        
        cin >> n >> m;
        
        if (n == 0 && m == 0) exit(0);
        
        resultado = n + m;
        
        resposta = to_string(resultado);
        
        indice = 0;
        while (resposta[indice] != '\0') {
            if (resposta[indice] != '0')
                cout << resposta[indice];
                
            indice++;
        }
        
        cout << endl;
        
    }

    return 0;
}
