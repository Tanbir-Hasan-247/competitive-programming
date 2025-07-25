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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (a[0] != 1)
        cout << a[0] << " ";
    else
    {
        a[0]++;
        cout << a[0] << " ";
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] % a[i - 1] == 0)
        {
            cout << a[i] + 1 << " ";
            a[i]++;
        }
        else
        {
            if (a[i] == 1)
            {
                if (2 % a[i - 1] == 0)
                {
                    cout << a[i] + 2 << " ";
                    a[i] += 2;
                }
                else
                {
                    cout << a[i] + 1 << " ";
                    a[i]++;
                }
            }
            else
                cout << a[i] << " ";
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
