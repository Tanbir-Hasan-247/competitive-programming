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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int j = 0;
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (abs(a[i] % 2) == abs(a[i + 1] % 2))
        {
            v.push_back({j, i});
            j = i + 1;
        }
    }
    v.push_back({j, i});

    ll ans = LLONG_MIN;

    for (auto x : v)
    {
        ll sum = a[x.first];
        ll max_sum = sum;

        for (int i = x.first + 1; i <= x.second; i++)
        {
            sum = max(sum + a[i], (ll)a[i]);
            max_sum = max(max_sum, sum);
        }
        ans = max(ans, max_sum);
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
