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

    string s;
    cin >> s;

    int zero = 0, one = 0;
    for (auto ch : s)
    {
        if (ch == '0')
            zero++;
        else
            one++;
    }

    int x = abs(one - zero);

    if (2 * k == x)
    {
        cout << "YES" << endl;
        return;
    }

    if (x % 2 != 0 || 2 * k < x)
    {
        cout << "NO" << endl;
        return;
    }

    int y = k - (x / 2);

    if (y % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
