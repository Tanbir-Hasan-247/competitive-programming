/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 23:20:47 03/12/2025
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
    string s;
    cin >> s;
    int l = 0, r = 0;
    for (auto ch : s)
    {
        if (ch == 'L')
            l++;
        else if (ch == 'R')
            r++;
    }

    int ans = 0;
    bool ok = false;
    for (int i = 0; i < s.size();)
    {
        if (s[i] == 'R' && s[i + 1] == 'L' && i + 1 < s.size())
        {
            ans += 2;
            s[i] = '?', s[i + 1] = '?';
            i += 2;
            r--, l--;
        }
        // else if ((s[i] == 'R' && s[i + 1] == 'S' && i + 1 < s.size())) {
        //     ans++;
        //     i++;
        // } else if ((s[i] == 'S' && s[i + 1] == 'L' && i + 1 < s.size()))
        // {
        //     ans++;
        //     i += 2;
        // } else if (ok && s[i] == 'L') {
        //     ans++;
        //     i++;
        // }
        else
            i++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'S')
        {
            ok = true;
            break;
        }
        if (s[i] == 'L')
            l--;
    }

    ok = false;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'S')
        {
            ok = true;
            break;
        }
        if (s[i] == 'R')
            r--;
    }

    cout<<ans+l+r<<endl;
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
