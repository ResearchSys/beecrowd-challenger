#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int h, m;
    
    while (cin >> h >> m)
        cout << setw(2) << setfill('0') << (int) h / 30 << ":" << setw(2) << setfill('0') << (int) m / 6 << endl;

    return 0;
}
