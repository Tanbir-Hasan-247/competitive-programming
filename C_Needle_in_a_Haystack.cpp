/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 14:56:21 06/12/2025
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

vector<char> fun(int n, string s)
{
    vector<char> nxt(n, '{');

    for (int i = n - 1; i >= 0; i--)
    {
        (i < n - 1 && s[i] != s[i + 1]) ? nxt[i] = s[i + 1] : nxt[i] = nxt[i + 1];
    }

    return nxt;
}

void solve()
{
    string s, t;
    cin >> s >> t;

    map<int, int> cnt_s, cnt_t;

    for (char c : s)
        cnt_s[c - 'a']++;
    for (char c : t)
        cnt_t[c - 'a']++;

    string ss = "";
    for (int i = 0; i < 26; i++)
    {
        if (cnt_t[i] < cnt_s[i])
        {
            cout << "Impossible" << endl;
            return;
        }

        int x = cnt_t[i] - cnt_s[i];
        while (x--)
        {
            ss += (char)('a' + i);
        }
    }

    int n = s.size(), m = ss.size();
    vector<char> nxt = fun(n, s);

    string ans = "";
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (ss[j] < s[i])
        {
            ans += ss[j];
            j++;
        }
        else if (ss[j] > s[i])
        {
            ans += s[i];
            i++;
        }
        else
        {
            if (nxt[i] < s[i])
            {
                ans += s[i];
                i++;
            }
            else
            {
                ans += ss[j];
                j++;
            }
        }
    }
    ans += ss.substr(j);
    ans += s.substr(i);

    cout << ans << endl;
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
