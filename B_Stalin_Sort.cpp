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
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2001;
    for (int i = 0; i < n; i++)
    {
        int temp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                temp += 1;
            }
        }
        ans = min(ans, temp);
    }

    cout << ans << endl;
    // vector<pair<ll, ll>> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     ll x;
    //     cin >> x;
    //     a[i] = {x, i};
    // }

    // sort(a.begin(), a.end(), [](const pair<ll, ll> &p1, const pair<ll, ll> &p2)
    //      { return p1.first > p2.first; });

    // ll ans = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     ans = min(ans, (a[i].second + i));
    // }

    // cout << ans << endl;
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
