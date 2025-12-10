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

    ll mn = INT_MAX, mn1 = INT_MAX;
    multiset<ll> st[n];
    int indx;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;

        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;

            st[i].insert(x);
        }
    }

    for (int i = 0; i < n; i++)
    {
        auto it = st[i].begin();
        advance(it, 1);

        if (mn > *it)
        {
            indx = i;
            mn = *it;
        }

        auto it1 = st[i].begin();
        mn1 = min(mn1, *it1);
    }

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == indx)
        {
            sum += mn1;
        }
        else
        {
            auto it = st[i].begin();
            advance(it, 1);
            sum += *it;
        }
    }

    cout << sum << endl;
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
