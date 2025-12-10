#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    string S;
    cin >> N >> S;

    vector<int> prefix_zeros(N + 1, 0);
    vector<int> prefix_ones(N + 1, 0);

    for (int i = 0; i < N; i++) {
        prefix_zeros[i + 1] = prefix_zeros[i] + (S[i] == '0' ? 1 : 0);
        prefix_ones[i + 1] = prefix_ones[i] + (S[i] == '1' ? 1 : 0);
    }

    long long total_sum = 0;

    for (int L = 0; L < N; L++) {
        for (int R = L; R < N; R++) {
            int count_zeros = prefix_zeros[R + 1] - prefix_zeros[L];
            int count_ones = prefix_ones[R + 1] - prefix_ones[L];

            if (count_zeros == count_ones) {
                total_sum += 2; // Both 0 and 1 are modes
            } else {
                total_sum += 1; // Only the more frequent character is the mode
            }
        }
    }

    cout << total_sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
