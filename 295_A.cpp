#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool isPangram(string s) {
    vector<bool> present(26, false);

    for (char c : s) {
        if (isalpha(c)) {
            char lc = tolower(c);
            present[lc - 'a'] = true;
        }
    }

    for (bool p : present) {
        if (!p) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (isPangram(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
