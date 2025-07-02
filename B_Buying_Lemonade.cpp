#include <bits/stdc++.h>
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sortAsc(a);
    ll ans = 0, x = 0, y = n, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] -= x;
        x += a[i];
        if (cnt + (a[i] * y) >= k)
        {
            ans += (k - cnt);
            break;
        }
        cnt += a[i] * y;
        ans += a[i] * y + 1;
        y--;
    }

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
