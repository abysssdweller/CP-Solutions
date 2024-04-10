#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

#define mll long long
#define vl vector<long long>
#define pb push_back
#define forl(i, a, b, c) for (mll i = a; i < b; i += c)

void show(vector<long long> &arr) {
    for (mll i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void constructPermutation(vector<long long> &a) {
    mll n = a.size();
    mll m = 0;
    map<mll, mll> mp, used;

    forl(i, 0, n, 1) mp[i]++;

    vector<long long> ans;

    for (mll i : a) {
        if (mp[m - i]) {
            ans.pb(m - i);
            used[m - i]++;
            mp[m - i] = 0;
        } else {
            ans.pb(m);
            used[m]++;
            mp[m] = 0;
        }

        while (used[m])
            m++;
    }

    show(ans);
}

int main() {
    mll t;
    cin >> t;

    while (t--) {
        mll n;
        cin >> n;

        vector<long long> a(n);
        for (mll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        constructPermutation(a);
    }

    return 0;
}