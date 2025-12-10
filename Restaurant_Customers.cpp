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

    int sum = 0, mx = 0;
    for (auto [idx, val] : d)
    {
        sum += val;
        mx = max(mx, sum);
    }

    cout << mx << "\n";

    return 0;
}
