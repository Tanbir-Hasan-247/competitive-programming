#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string even, odd;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            odd += s[i];
        }
        else
        {
            even += s[i];
        }
    }
    sortAsc(even);
    sortAsc(odd);
    // cout<<even<<" "<<odd<<endl;
    int ans = 0;

    for (int i = 0; i < even.size();)
    {
        if (even[i] == even[i + 1])
        {
            i += 2;
        }
        else
        {
            ans++;
            i++;
        }
    }
    for (int i = 0; i < odd.size();)
    {
        if (odd[i] == odd[i + 1])
        {
            i += 2;
        }
        else
        {
            ans++;
            i++;
        }
    }
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
