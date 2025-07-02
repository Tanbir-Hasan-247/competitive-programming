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
    string s;
    cin >> s;
    vector<ll> ans(n);
    set<ll> unq;
    for (ll i = 1; i <= n; i++)
    {
        unq.insert(i);
    }

    ll N = s.size();
    for (ll i = N - 1; i >= 0; i--)
    {
        if (s[i] == '>')
        {
            ans[i + 1] = *unq.rbegin();
            unq.erase(--unq.end());
        }
    }
    for (ll i = N - 1; i >= 0; i--)
    {
        if (s[i] == '<')
        {
            ans[i + 1] = *unq.begin();
            unq.erase(unq.begin());
        }
    }

    ans[0] = *unq.begin();
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << '\n';
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
