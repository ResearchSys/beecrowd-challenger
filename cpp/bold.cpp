#include <iostream>

using namespace std;

int main() {
    
    int t;
    float v, menor;
    
    while (cin >> t) {
        menor = 11;
        
        while (t--) {
            cin >> v;
            if (v < menor)
                menor = v;
        }
        
        cout << menor << endl;
    }

    return 0;
}
