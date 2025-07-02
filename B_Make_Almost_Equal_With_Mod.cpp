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
    vector<ll> a(n);
    bool even = false, odd = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even = true;
        else
            odd = true;
    }

    if (even && odd)
    {
        cout << 2 << endl;
        return;
    }

    set<ll> st;
    ll div = 2;

    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            ll x = a[i] % div;
            st.insert(x);
        }
        if (st.size() == 2)
        {
            cout << div << endl;
            return;
        }
        st.clear();
        div *= 2;
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
