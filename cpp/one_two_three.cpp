#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    while (n--) {

        int erros = 0;
        int indice = 0;
        int resposta = 1;
        int tamanho = 0;
        string palavra;
        
        cin >> palavra;
        
        while (palavra[indice++] != '\0')
            tamanho++;
        
        if (tamanho == 5)
            resposta = 3;
        else {
            if (palavra[0] != 'o') erros++;
            if (palavra[1] != 'n') erros++;
            if (palavra[2] != 'e') erros++;
            if (erros >= 2) resposta = 2;
        }
        
        cout << resposta << endl;
        
    }
    return 0;
}
