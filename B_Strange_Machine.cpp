/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 21:02:51 24/10/2025
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

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int> v;
    bool ok = true;
    for (int i = 0; i < n;)
    {
        if (s[i] == 'B')
        {
            v.pb(-1);
            ok = false;
            i++;
        }
        else
        {
            int cnt = 0;
            while (i < n && s[i] == 'A')
            {
                cnt++;
                i++;
            }
            v.pb(cnt);
        }
    }

    while (q--)
    {
        ll k;
        cin >> k;

        if (ok)
        {
            cout << k << endl;
            continue;
        }
        ll cnt = 0;
        int i = 0;
        while (k)
        {
            if (i == v.size())
                i = 0;

            if (v[i] == -1)
            {
                k /= 2;
                cnt++;
            }
            else
            {
                if (k >= v[i])
                {
                    k -= v[i];
                    cnt += v[i];
                }
                else
                {
                    cnt += k;
                    k = 0;
                }
            }
            i++;
        }
        cout << cnt << endl;
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
