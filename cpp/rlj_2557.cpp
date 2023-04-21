#include <iostream>
using namespace std;
int main() {
    string linha, token;
    int v0, v1, v2, r, pos;
    while (getline(cin, linha)) {
        r = 2;
        pos = linha.find("+");
        token = linha.substr(0, pos);
        if (token[0] != 'R')
            v0 = stoi(token);
        else {
            v0 = 0;
            r = 0;
        }
        linha.erase(0, pos + 1);
        pos = linha.find("=");
        token = linha.substr(0, pos);
        if (token[0] != 'L')
            v1 = stoi(token);
        else {
            v1 = 0;
            r = 1;
        }
        linha.erase(0, pos + 1);
        pos = linha.find("\n");
        token = linha.substr(0, pos);
        if (token[0] != 'J')
            v2 = stoi(token);
        else
            v2 = 0;
        if (!r)
            cout << v2 - v1 << endl;
        else if (r == 1)
            cout << v2 - v0 << endl;
        else
            cout << v0 + v1 << endl;
    }
    return 0;
}
