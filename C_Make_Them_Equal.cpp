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
    char c;
    cin >> c;

    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != c)
            v.pb(i + 1);
    }

    if (v.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    // if (v.size() == 1)
    // {
    //     cout << 1 << endl;
    //     if (v[0] == 1)
    //         cout << v[0] + 1 << endl;
    //     else
    //         cout << n - 1 << endl;
    //     return;
    // }

    // sortAsc(v);

    for (int i = n / 2; i < n; i++)
    {
        if (s[i] == c)
        {
            cout << 1 << endl;
            cout << i + 1 << endl;
            return;
        }
    }

    cout << 2 << endl;
    cout << n << " " << n - 1 << endl;
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
