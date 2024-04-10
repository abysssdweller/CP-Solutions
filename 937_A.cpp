#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin >> tt;
    
    for (int i = 1; i <= tt; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a < b && b < c) {
            cout << "STAIR" << endl;
        } else if (a < b && b > c) {
            cout << "PEAK" << endl;
        } else {
            cout << "NONE" << endl;
        }
    }
    
    return 0;
}
