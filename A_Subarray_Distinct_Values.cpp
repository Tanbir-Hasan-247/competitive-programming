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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<ll> st;
    deque<ll> dq;
    map<ll, int> mp;
    ll ans = 0, j = 0;

    for (int i = 0; i < n; i++)
    {
        dq.push_back(a[i]);
        st.insert(a[i]);
        mp[a[i]]++;

        while (st.size() > k)
        {
            int v = dq.front();
            dq.pop_front();
            mp[v]--;

            if (mp[v] == 0)
            {
                st.erase(v);
            }
            j++;
        }

        ans += (i - j + 1);
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
