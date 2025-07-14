#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"
ll MOD = 998244353;

void solve()
{
    string s;
    cin >> s;

    ll len = 1, cur = 1, ans = 1;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            len++;
            ans = (ans * cur) % MOD;
            cur = 1;
        }
        else
        {
            cur++;
        }
    }
    ans = (ans * cur) % MOD;

    for (int i = 1; i <= s.size() - len; i++)
    {
        ans = (ans * i) % MOD;
    }

    cout << s.size() - len << " " << ans << endl;
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
