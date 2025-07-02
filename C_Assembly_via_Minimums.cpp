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
    int m = n; // keep original value of n

    map<ll, ll> mp;
    set<ll> st;
    vector<ll> b((n * (n - 1)) / 2);

    for (int i = 0; i < (n * (n - 1)) / 2; i++)
    {
        cin >> b[i];
        st.insert(b[i]);
        mp[b[i]]++;
    }

    vector<ll> a;

    for (ll x : st)
    {
        while (mp[x] > 0 && a.size() < m)
        {
            a.push_back(x);
            mp[x] -= (m - a.size());
        }
    }

    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << a.back() << endl;
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
