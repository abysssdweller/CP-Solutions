#include <iostream>
#include <vector>
#include <string> 

using namespace std;

int main() {
    int t;
    cin >> t;
    string s1 = "abcdefgh";
    while (t--) {
        string s;
        cin >> s;
        for (int i = 1; i < 9; i++) {
            if (to_string(i)[0] != s[1]) {
                cout << s[0] << to_string(i) << endl;
            }
        }
        for (char c : s1) {
            if (c != s[0]) {
                string move = "";
                move += c;
                move += s[1];
                cout << move << endl;
            }
        }
    }
    return 0;
}
