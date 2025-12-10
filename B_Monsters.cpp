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

struct cmp
{
    bool operator()(const pair<ll, ll> &a, const pair<ll, ll> &b) const
    {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    multiset<pair<ll, ll>, cmp> st;
    for (int i = 1; i <= n; i++)
    {
        ll rem = a[i] % k;
        if (rem == 0)
            rem = k;
        st.insert({rem, i});
    }

    for (auto x : st)
    {
        cout << x.second << " ";
    }
    cout << endl;
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
