#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    int sum = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i])
        {
            v.pb(i + 1);
        }
    }

    if (sum < s)
    {
        cout << -1 << endl;
        return;
    }

    if (sum == s)
    {
        cout << 0 << endl;
        return;
    }

    int ans = n;
    for (int i = 0; i + s - 1 < v.size(); i++)
    {
        if (i != 0 && i + s - 1 != v.size() - 1)
        {
            ans = min(ans, v[i - 1] + n - v[i + s] + 1);
        }
        else if (i == 0)
        {
            ans = min(ans, n - v[i + s] + 1);
        }
        else if (i + s - 1 == v.size() - 1)
        {
            ans = min(v[i - 1], ans);
        }
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
