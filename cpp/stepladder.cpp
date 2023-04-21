#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x, i, j = 0, dif;
    vector<int> v, escadinha;
    cin >> n;
    for (i = 0; i < n; i++) {
    	cin >> x;
    	v.push_back(x);
    }
    if (n == 1 || n == 2)
        cout << "1" << endl;
    else {
        dif = v[1] - v[0];
        escadinha.push_back(2);
        for (i = 1; i < n; i++) {
            if (v[i] - v[i-1] == dif)
                escadinha[j]++;
            else {
                j++;
                escadinha.push_back(1);
            }
            dif = v[i] - v[i-1];
        }
        cout << ++j << endl;
    }
    return 0;
}
