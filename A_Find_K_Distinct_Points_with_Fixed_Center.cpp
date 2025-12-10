#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        vector<pair<int, int>> points;
        int x = xc - (k / 2);  // Start x near the center
        int y = yc - (k / 2);  // Start y near the center

        for (int i = 0; i < k; ++i) {
            points.push_back({x + i, y + i});
        }

        for (const auto &p : points) {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}
