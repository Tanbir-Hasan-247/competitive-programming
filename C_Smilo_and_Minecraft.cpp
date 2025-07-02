#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

const int MAX = 505;

int dx[] = {-1, 1, 0, 0}; // for boundary traversal if needed

bool is_valid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
            cin >> grid[i];

        int max_gold = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] != '.') continue;

                int gold = 0;

                // Explode at (i,j)
                for (int x = i - k; x <= i + k; ++x) {
                    for (int y = j - k; y <= j + k; ++y) {
                        if (!is_valid(x, y, n, m)) continue;
                        if (grid[x][y] != 'g') continue;

                        // Check if (x,y) is on the boundary of the explosion square
                        if (x == i - k || x == i + k || y == j - k || y == j + k) {
                            gold++;
                        }
                    }
                }

                max_gold = max(max_gold, gold);
            }
        }

        cout << max_gold << '\n';
    }

    return 0;
}
