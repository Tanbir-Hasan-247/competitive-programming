#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> edges;

    // We start with node 1 and try to find edges
    for (int i = 2; i <= n; ++i) {
        cout << "? 1 " << i << endl;
        cout.flush();
        int res;
        cin >> res;
        if (res == 1) {
            edges.push_back({1, i});
        } else {
            edges.push_back({res, i});
        }
    }

    // Output the edges
    cout << "! ";
    for (auto edge : edges) {
        cout << edge.first << " " << edge.second << " ";
    }
    cout << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
