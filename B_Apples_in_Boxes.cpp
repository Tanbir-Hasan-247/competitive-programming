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
    ll k;
    cin >> k;

    multiset<ll> a;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.insert(x);
        sum += x;
    }

    ll mn = *a.begin();
    ll mx = *a.rbegin();
    auto it = prev(a.end());
    a.erase(it);
    a.insert(mx-1);

    mx=*a.rbegin();

    if (mx - mn  > k)
    {
        cout << "Jerry" << endl;
    }
    else
    {
        if (sum % 2 != 0)
        {
            cout << "Tom" << endl;
        }
        else
        {
            cout << "Jerry" << endl;
        }
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
