#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1);  // Use 1-based indexing

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    vector<bool> visited(n + 1, false);
    int swaps = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            // We have found an unvisited node, let's explore the cycle
            int cycle_length = 0;
            int current = i;

            while (!visited[current]) {
                visited[current] = true;
                current = p[current];
                cycle_length++;
            }

            // If cycle_length > 1, we need cycle_length - 1 swaps
            if (cycle_length > 1) {
                swaps += (cycle_length - 1);
            }
        }
    }

    cout << swaps << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
