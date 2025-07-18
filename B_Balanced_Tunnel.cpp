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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp1[a[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mp2[b[i]] = i;
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.pb(mp2[a[i]]);
    }

    int ans = 0;
    int mx = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < mx)
        {
            ans++;
        }
        mx = max(mx, v[i]);
        // cout<<v[i]<<" ";
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    return 0;
}
