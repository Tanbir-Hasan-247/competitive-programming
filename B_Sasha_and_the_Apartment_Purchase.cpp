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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sortAsc(a);

    int x = n - k;
    set<int> st;

    for (int i = 0; i + x <= n; i++)
    {
        int l = i;
        int r = i + x - 1;
        int m1 = (l + r) / 2;
        int m2 = (l + r + 1) / 2;
        st.insert(a[m1]);
        st.insert(a[m2]);
    }

    if (!st.empty())
    {
        int mn = *st.begin();
        int mx = *st.rbegin();
        cout << (mx - mn + 1) << endl;
    }
    else
        cout << "0\n";
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
