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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> zero;
    for (ll i = 0; i < n; i++)
    {
        if (!a[i])
        {
            zero.push_back(i);
        }
    }

    if (!zero.size())
    {
        cout << 1 << endl;
        cout << 1 << ' ' << n << endl;
    }
    else
    {
        if (zero[0] != 0)
        {
            cout << 2 << endl;
            cout << 2 << ' ' << n << endl;
            cout << 1 << ' ' << 2 << endl;
        }
        else if (zero.back() != n - 1)
        {
            cout << 2 << endl;
            cout << 1 << ' ' << n - 1 << endl;
            cout << 1 << ' ' << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
            cout << 3 << ' ' << n << endl;
            cout << 1 << ' ' << 2 << endl;
            cout << 1 << ' ' << 2 << endl;
        }
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
