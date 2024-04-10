#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxWins(int n, int k, vector<int>& ratings) {
    if (ratings.empty()) {
        return 0;
    }

    int p = 0;
    int q = 0;
    int x = ratings[k - 1];

    for (int i = 0; i < n; ++i) {
        if (ratings[i] > ratings[k - 1]) {
            p = i;
            break;
        }
    }

    if (p + 1 != 1) {
        q += 1;
    }

    int y = ratings[k - 1];
    vector<int> v = ratings;
    v[k - 1] = v[p];
    v[p] = x;

    for (int i = 0; i < p; ++i) {
        if (v[i] >= x) {
            return p - 1;
        }
    }

    for (int i = p + 1; i < n; ++i) {
        if (v[i] >= x) {
            break;
        } else {
            q += 1;
        }
    }

    return max(p - 1, q);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> ratings(n);
        for (int i = 0; i < n; ++i) {
            cin >> ratings[i];
        }

        int max_wins = maxWins(n, k, ratings);
        cout << max_wins << endl;
    }

    return 0;
}
