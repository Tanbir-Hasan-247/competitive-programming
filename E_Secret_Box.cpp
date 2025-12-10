#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k;

        long long ans = 0;
        for (int a = 1; a <= x; ++a) {
            for (int b = 1; b <= y; ++b) {
                for (int c = 1; c <= z; ++c) {
                    if (1LL * a * b * c == k) {
                        ans += (x - a + 1) * (y - b + 1) * (z - c + 1);
                    }
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
