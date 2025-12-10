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
    ll n, k, x;
    cin >> n >> k >> x;

    ll minSum = k * (k + 1) / 2;

    if (x < minSum)
    {
        cout << "NO" << endl;
        return;
    }

    if (x > (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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
