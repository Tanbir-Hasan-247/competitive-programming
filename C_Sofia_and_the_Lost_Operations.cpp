#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n;

        vector<int> original(n);
        for (int i = 0; i < n; ++i) {
            cin >> original[i];
        }

        vector<int> found(n);
        for (int i = 0; i < n; ++i) {
            cin >> found[i];
        }

        cin >> m;

        unordered_map<int, int> modification;
        for (int i = 0; i < m; ++i) {
            int d;
            cin >> d;
            modification[d]++;
        }

        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (original[i] != found[i]) {
                if (modification.find(found[i]) == modification.end() || modification[found[i]] == 0) {
                    possible = false;
                    break;
                }
                modification[found[i]]--;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
