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
    ll w, h, a, b;
    ll x1, y1, x2, y2;
    cin >> w >> h >> a >> b;
    cin >> x1 >> y1 >> x2 >> y2;

    ll dx = abs(x1 - x2);
    ll dy = abs(y1 - y2);

    bool ok1 = (dx % a == 0);
    bool ok2 = (dy % b == 0);

    if (ok1 && ok2)
    {
        cout << "Yes" << endl;
    }
    else if (ok1 && dx >= a)
    {
        cout << "Yes" << endl;
    }
    else if (ok2 && dy >= b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
