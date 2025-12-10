#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int h, n;
        cin >> h >> n;

        vector<ll> a(n), c(n), cooldown(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        int turns = 0;
        ll damage = 0;

        while (h > 0) {
            ll maxDamage = 0;
            for (int i = 0; i < n; i++) {
                if (cooldown[i] <= turns) {
                    maxDamage = max(maxDamage, a[i]);
                }
            }
            damage += maxDamage;
            for (int i = 0; i < n; i++) {
                if (cooldown[i] <= turns && a[i] == maxDamage) {
                    cooldown[i] = turns + c[i];
                }
            }
            turns++;
            h -= maxDamage;
        }

        cout << turns - 1 << "\n"; // Adjusting for the final turn where the boss's health becomes zero or less
    }

    return 0;
}
