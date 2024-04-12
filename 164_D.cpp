#include <iostream>
#include <algorithm>
using namespace std;

typedef long long INT;
const int NN = 5050, mod = 998244353;
int a[NN], number_of_sum[NN] = {1};

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    sort(a + 1, a + n + 1);

    INT ans = 0;
    for (int i = 1; i <= n; i++) {
        int x = a[i];
        for (int j = 0; j <= x; j++)
            ans = (ans + (INT)number_of_sum[j] * x) % mod;
        for (int j = x + 1; j <= NN; j++)
            ans = (ans + (INT)number_of_sum[j] * ((j + x + 1) >> 1)) % mod;
        for (int j = NN - 1; j >= 0; j--) {
            if (j >= x) {
                number_of_sum[j] = (number_of_sum[j] + number_of_sum[j - x]) % mod;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
