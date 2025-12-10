#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 998244353;
const int MAX = 200005;

// Global arrays for factorials
int fact[MAX], invFact[MAX];

// Function for Modular Exponentiation
int power(int base, int exp) {
    int res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Modular Inverse
int modInverse(int n) {
    return power(n, MOD - 2);
}

// Precompute Factorials
void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        invFact[i] = modInverse(fact[i]);
    }
}

// nPr Function
int nPr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return (fact[n] * invFact[n - r]) % MOD;
}

void solve() {
    int N, K;
    cin >> N >> K;

    // Calculate number of arrays with all distinct elements
    int distinct_count = 0;
    if (N <= K) {
        distinct_count = nPr(K, N);
    } else {
        distinct_count = 0;
    }

    int ans = 0;
    int current_perm = 1; // Stores P(K, x-1)

    // We iterate x from 1 to N.
    // Optimization: If x > K + 1, Total(x) becomes 0, so we can stop.
    int limit = min(N, K + 1);

    for (int x = 1; x <= limit; ++x) {
        // Calculate Total(x): Arrays where every window of size x has distinct elements
        // Formula: P(K, x-1) * (K - x + 1)^(N - x + 1)
        
        int base = K - x + 1;
        
        // If base is 0 (i.e., x = K+1), term contributes 0.
        // We handle power(0, positive) = 0.
        int suffix = power(base, N - x + 1);
        int total_x = (current_perm * suffix) % MOD;
        
        // Add contribution: Total(x) - Distinct
        int contribution = (total_x - distinct_count + MOD) % MOD;
        ans = (ans + contribution) % MOD;

        // Update current_perm for the next iteration (x+1)
        // Next iteration requires P(K, x)
        // P(K, x) = P(K, x-1) * (K - (x-1))
        // Note: (K - (x-1)) is exactly 'base' calculated above.
        current_perm = (current_perm * base) % MOD;
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}