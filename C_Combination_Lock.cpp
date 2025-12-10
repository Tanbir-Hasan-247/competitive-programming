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

    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> a(n);
    a[0] = n - 1;
    a[1] = 1;
    int i = 2;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (; i < n / 2 + 2; i++)
    {
        a[i] = a[i - 1] + 2;
    }
    a[i] = 2;
    i++;
    for (; i < n; i++)
    {
        a[i] = a[i - 1] + 2;
    }

    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
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
