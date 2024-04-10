#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> m(n);
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }

        sort(m.begin(), m.end());

        int mi = m[n - 1];
        int mk = m[n - 2];
        int mj = m[0];
        int ml = m[1];

        cout << abs(mi - mj) + abs(mj - mk) + abs(mk - ml) + abs(ml - mi) << endl;
    }

    return 0;
}
