#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> d;

    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    bool ok = true;
    int sum = 0;
    for (auto [idx, val] : d)
    {
        sum += val;
        if (sum > 2)
        {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << "\n";

    return 0;
}
