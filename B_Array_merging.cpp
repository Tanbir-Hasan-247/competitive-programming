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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    map<int, int> max_a, max_b;

    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            cnt++;
        else
            cnt = 1;
        max_a[a[i]] = max(max_a[a[i]], cnt);
    }
    max_a[a[0]] = max(max_a[a[0]], 1);

    cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
            cnt++;
        else
            cnt = 1;
        max_b[b[i]] = max(max_b[b[i]], cnt);
    }
    max_b[b[0]] = max(max_b[b[0]], 1);

    int ans = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        ans = max(ans, max_a[i] + max_b[i]);
    }

    cout << ans << endl;
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
