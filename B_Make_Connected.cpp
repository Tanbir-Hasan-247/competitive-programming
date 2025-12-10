#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        bool impossible = false;
        // Check for any triple '#' in a row
        for (int i = 0; i < n && !impossible; i++) {
            for (int j = 0; j + 2 < n; j++) {
                if (grid[i][j] == '#' && grid[i][j+1] == '#' && grid[i][j+2] == '#') {
                    impossible = true;
                    break;
                }
            }
        }
        // Check for any triple '#' in a column
        for (int j = 0; j < n && !impossible; j++) {
            for (int i = 0; i + 2 < n; i++) {
                if (grid[i][j] == '#' && grid[i+1][j] == '#' && grid[i+2][j] == '#') {
                    impossible = true;
                    break;
                }
            }
        }
        // Check for forbidden pattern "#.#" in any row
        for (int i = 0; i < n && !impossible; i++) {
            for (int j = 0; j + 2 < n; j++) {
                if (grid[i][j] == '#' && grid[i][j+1] == '.' && grid[i][j+2] == '#') {
                    impossible = true;
                    break;
                }
            }
        }
        // Check for forbidden pattern "#.#" in any column
        for (int j = 0; j < n && !impossible; j++) {
            for (int i = 0; i + 2 < n; i++) {
                if (grid[i][j] == '#' && grid[i+1][j] == '.' && grid[i+2][j] == '#') {
                    impossible = true;
                    break;
                }
            }
        }

        if (impossible) {
            cout << "NO\n";
            continue;
        }
        // Count black cells
        int blackCount = 0;
        for (int i = 0; i < n; i++) {
            for (char c : grid[i]) {
                if (c == '#') blackCount++;
            }
        }
        // If no black cells initially, we can paint one and succeed
        if (blackCount == 0) {
            cout << "YES\n";
        } else {
            // Otherwise, with no forbidden pattern, it is always possible
            cout << "YES\n";
        }
    }
    return 0;
}
