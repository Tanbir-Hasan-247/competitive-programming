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

ll gcd(vector<ll> a)
{
    ll x = 0;
    for (auto aa : a)
    {
        x = __gcd(x, aa);
    }
    return x;
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> a, b;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i % 2 == 0)
            a.push_back(x);
        else
            b.push_back(x);
    }

    ll div = gcd(a);

    bool f = false;
    for (auto x : b)
    {
        if (x % div == 0)
        {
            f = true;
            break;
        }
    }
    if (!f)
    {
        cout << div << endl;
        return;
    }

    div = gcd(b);

    f = false;
    for (auto x : a)
    {
        if (x % div == 0)
        {
            f = true;
            break;
        }
    }
    if (!f)
    {
        cout << div << endl;
        return;
    }

    cout << 0 << endl;
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