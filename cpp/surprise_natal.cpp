#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n, meio, i, j, v;
    vector<int> p, pares;
    
    while (true) {
        
        cin >> n;
        
        if (!n)
            break;
        
        for (i = 0; i < 2 * n; i++) {
            cin >> v;
            p.push_back(v);
        }
        
        sort(p.begin(), p.end());
        
        meio = p.size() / 2;
        
        for (i = 0, j = p.size()-1; i < p.size()/2; i++, j--)
            pares.push_back(p.at(i) + p.at(j));
        
        sort(pares.begin(), pares.end());
        cout << pares.back() << " " << pares.front() << endl;
        
        p.clear();
        pares.clear();
    }

    return 0;
}
