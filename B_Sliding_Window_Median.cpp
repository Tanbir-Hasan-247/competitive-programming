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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<ll> s;
    for (int i = 0; i < k; i++)
    {
        s.insert(a[i]);
    }

    auto mid = s.begin();
    advance(mid, (k - 1) / 2);

    cout << *mid << " ";

    for (int i = k; i < n; i++)
    {
        s.insert(a[i]);
        if (a[i] < *mid)
        {
            mid--;
        }

        if (a[i - k] <= *mid)
        {
            mid++;
        }
        s.erase(s.find(a[i - k]));

        cout << *mid << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    return 0;
}
