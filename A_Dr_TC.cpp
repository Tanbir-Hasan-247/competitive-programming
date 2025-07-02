#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt1 = 0;
    for (char c : s)
    {
        if (c == '1')
            cnt1++;
    }
    int cnt0 = n - cnt1;
    int ans = cnt1 * (n - 1) + cnt0;
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
