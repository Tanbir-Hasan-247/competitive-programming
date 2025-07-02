#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

const int MAX_N = 100000;

// Precompute coefficients using the wrong formula
vector<vector<int>> compute_coefficients() {
    vector<vector<int>> C(MAX_N + 1, vector<int>(MAX_N + 1, 0));

    // Initialize base cases
    for (int n = 0; n <= MAX_N; n++) {
        C[n][0] = 1; // C(n, 0) = 1
        C[n][n] = 1; // C(n, n) = 1
        for (int k = 1; k < n; k++) {
            // Wrong formula: C[n][k] = C[n][k - 1] + C[n - 1][k - 1]
            C[n][k] = (C[n][k - 1] + C[n - 1][k - 1]) % MOD;
        }
    }

    return C;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Precompute all the values
    vector<vector<int>> C = compute_coefficients();

    int t;
    cin >> t;
    vector<int> n(t), k(t);
    
    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }
    
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }

    // Answer each query
    for (int i = 0; i < t; i++) {
        cout << C[n[i]][k[i]] << '\n';
    }

    return 0;
}
