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
    ll n, k;
    cin >> n >> k;

    if (n < k)
    {
        cout << "NO" << endl;
        return;
    }

    bool ok = true;

    vector<ll> v;

    ll sum = n;
    for (int i = 0; i < k; i++)
    {
        if (i == k - 1)
        {
            v.pb(sum);
            if (sum % 2 == 0 || sum <= 0)
            {
                ok = false;
            }
        }
        else
        {
            v.pb(1);
            sum--;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    sum = n;
    v.clear();
    ok = true;
    for (int i = 0; i < k; i++)
    {
        if (i == k - 1)
        {
            v.pb(sum);
            if (sum % 2 != 0 || sum <= 0)
            {
                ok = false;
            }
        }

        else
        {
            v.pb(2);
            sum -= 2;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    cout << "NO" << endl;
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
