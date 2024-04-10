#include <iostream>
#include <vector>

using namespace std;

vector<int> farmerJohnsChallenge(int n, int k) {
    if (k == 1) {
        vector<int> sortedArray(n);
        for (int i = 0; i < n; ++i) {
            sortedArray[i] = i + 1;
        }
        return sortedArray;
    }
    
    if (k == n) {
        return vector<int>(n, 69);
    }

    return {-1};
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;

        vector<int> result = farmerJohnsChallenge(n, k);
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
