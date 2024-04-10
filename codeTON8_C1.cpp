#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define vl vector<long long>
#define forl(i, a, b, c) for (int i = a; i < b; i += c)
#define read(v, n) for (int i = 0; i < n; i++) { long long x; cin >> x; v.push_back(x); }
#define print(x) cout << x << endl;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        
        vl v;
        read(v, x);
        sort(v.begin(), v.end());
        
        long long res = x - 2;
        forl(i, 0, x - 1, 1) {
            if (v[i] + 2 == v[i + 1]) {
                res++;
            }
        }

        if (x >= 2 && (v[x - 1] + 2) % n == v[0]) {
            res++;
        }

        print(res);
    }

    return 0;
}
