/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 20:50:42 11/12/2025
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            v.pb(i);
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {

            int l = 0, r = v.size() - 1;
            int indx = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (v[mid] > i)
                {
                    indx = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            int pos = (indx == -1 || indx == 0) ? v.back() : v[indx - 1];

            ans = max(ans, (i - pos < 0) ? i - pos + n : i - pos);
        }
    }

    cout << ans << "\n";
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
