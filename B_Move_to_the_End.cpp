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

    vector<ll> a(n);
    multiset<pair<ll, int>> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert({a[i], i});
    }

    ll sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        auto it = prev(s.end()); 

        auto x = *it; 
        if (a[i] < x.first && x.second >= i)
        {
            sum += x.first;
            cout << sum << " ";
            s.erase(it);
        }
        else if (a[i] < x.first && x.second < i)
        {
            cout << sum + x.first << " ";
            sum += a[i];
            s.erase({a[i], i});
        }
        else
        {
            if (x.first == a[i] && x.second >= i)
            {
                sum += a[i];
                cout << sum << " ";
                s.erase(it);
            }
            else
            {
                sum += a[i];
                cout << sum << " ";
                s.erase({a[i], i});
            }
        }
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
