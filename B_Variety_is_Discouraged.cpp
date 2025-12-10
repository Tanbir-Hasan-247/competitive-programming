#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll first = 0, second = 0, ans1 = 0, ans2 = 0, mx = 0;
    bool ok = false;

    for (ll i = 0; i < n; i++)
    {
        bool f = false;

        while (mp[a[i]] == 1)
        {
            ok = true;
            if (!f)
            {
                first = i;
                f = true;
            }
            if (f)
            {
                second = i;
                if ((second - first + 1) >= mx)
                {
                    mx = second - first + 1;
                    ans1 = first;
                    ans2 = second;
                }
            }
            i++;
        }
        if (f)
        {
            i--;
        }
    }

    if (ok)
    {
        cout << ans1 + 1 << " " << ans2 + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
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
