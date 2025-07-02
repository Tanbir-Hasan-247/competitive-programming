#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long ans = 0;
        map<int, int> freq;
        multiset<int> sorted_elements;

        for (int x : a) {
            // Count the number of elements less than x
            ans += distance(sorted_elements.begin(), sorted_elements.lower_bound(x));

            // Update the frequency of the element x
            ans += freq[x];
            freq[x]++;

            // Insert x into the sorted set
            sorted_elements.insert(x);
        }

        cout << ans << "\n";
    }

    return 0;
}