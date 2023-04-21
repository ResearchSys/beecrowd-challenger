#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n, i, j, pos, maior;
    string linha, token, linhaFinal;
    bool lock = false;
    while (cin >> n) {
        cin.ignore();
        vector<string> palavras[n], resposta[n];
        int tamLinhas[n] = {0};
        if (!n)
            break;
        if (lock)
            cout << endl;
        else
            lock = true;
        for (i = 0; i < n; i++) {
            getline(cin, linha);
            pos = 0;
            while ((pos = linha.find(" ")) != string::npos) {
                token = linha.substr(0, pos);
                if (token.size() > 0)
                    palavras[i].push_back(token);
                linha.erase(0, pos + 1);
            }
            if (linha.size() > 0)
                palavras[i].push_back(linha);
        }
        for (i = 0; i < n; i++) {
            linhaFinal = palavras[i].at(0);
            for (j = 1; j < palavras[i].size(); j++)
                    linhaFinal += " " + palavras[i].at(j);
            tamLinhas[i] = linhaFinal.size();
            resposta[i].push_back(linhaFinal);
        }
        maior = 0;
        for (i = 0; i < n; i++)
            if (tamLinhas[i] > maior)
                maior = tamLinhas[i];
        for (i = 0; i < n; i++) {
            cout.width(maior);
            cout << right << resposta[i].at(0) << endl;
        }
        for (auto& w : palavras)
            w.clear();
    }
    return 0;
}
