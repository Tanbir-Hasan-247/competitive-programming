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
    int cnt0 = 0, cnt1 = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
            cnt0++;
        else
            cnt1++;
    }

    int mn = 0, mx = 0;
    if (cnt1 <= n)
        mx = cnt1;
    else
        mx = (n - (cnt1 - n));

    if (cnt1 % 2 == 0)
        mn = 0;
    else
        mn = 1;

    cout << mn << " " << mx << endl;
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
