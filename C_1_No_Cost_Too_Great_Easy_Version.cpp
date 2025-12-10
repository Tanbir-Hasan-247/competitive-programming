/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 20:33:48 24/10/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"
int N = 2 * 10e5 + 5;
vector<int> temp(N, 0);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        while (x > 1)
        {
            int p = temp[x];
            if (p == 0)
            {
                p = x;
            }
            mp[p]++;
            while (x % p == 0)
            {
                x /= p;
            }
        }
    }

    for (auto [key, val] : mp)
    {
        if (val > 1)
        {
            cout << 0 << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int x = a[i] + 1;
        while (x > 1)
        {
            int p = temp[x];
            if (p == 0)
            {
                p = x;
            }
            if (mp[p] > 0)
            {
                cout << 1 << endl;
                return;
            }
            while (x % p == 0)
            {
                x /= p;
            }
        }
    }

    cout << 2 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 2; i <= N; i++)
    {
        if (temp[i] == 0)
        {
            temp[i] = i;
            for (int j = i; j <= N; j += i)
            {
                if (temp[j] == 0)
                    temp[j] = i;
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
