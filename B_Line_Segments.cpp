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
    ll px, py, qx, qy;
    cin >> px >> py >> qx >> qy;

    ll sum = 0;
    ll mx = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }

    ll dis = (ll)pow(px - qx, 2) + (ll)pow(py - qy, 2);
    ll sum1 = sum * sum;

    if (dis > sum1)
    {
        cout << "No" << endl;
        return;
    }

    ll mn = 2 * mx - sum;
    if (mn > 0)
    {
        mn = mn * mn;
        if (dis < mn)
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
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
