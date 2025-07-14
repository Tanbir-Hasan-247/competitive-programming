#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    set<ll> st;
    ll mn = LLONG_MAX;
    int indx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);

        if (a[i] < mn)
        {
            mn = a[i];
            indx = i;
        }
    }

    if (st.size() == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (mn == 1)
    {
        cout << -1 << endl;
        return;
    }

    vector<pair<int, int>> ans;
    while (count(a.begin(), a.end(), a[0]) < n && count(a.begin(), a.end(), 2) == 0)
    {
        int i = 1;
        while (a[0] == a[i])
        {
            i++;
        }
        if (a[0] > a[i])
        {
            ans.pb({1, i + 1});
            a[0] = (a[0] + a[i] - 1) / a[i];
        }
        else
        {
            ans.pb({i + 1, 1});
            a[i] = (a[i] + a[0] - 1) / a[0];
        }
    }

    if (count(a.begin(), a.end(), a[0]) < n)
    {
        int i = find(a.begin(), a.end(), 2) - a.begin();
        for (int j = 0; j < n; j++)
        {
            while (a[j] != 2)
            {
                ans.pb({j + 1, i + 1});
                a[j] = (a[j] + 1) / 2;
            }
        }
    }

    cout << ans.size() << endl;
    for (auto val : ans)
    {
        cout << val.first << " " << val.second << endl;
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
