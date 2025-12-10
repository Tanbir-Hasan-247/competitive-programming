#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
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

    int zero = 0, one = 0;
    vector<pair<int, int>> v(n + 1);
    v[0] = {0, 0};

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;

        v[i + 1] = {zero, one};
    }

    int pos = n * 2;
    int ans = 0;

    for (int i = 0; i <= n; i++)
    {
        int left_zeros = v[i].first;
        int right_ones = v[n].second - v[i].second;

        bool ok1 = left_zeros >= (i + 1) / 2;
        bool ok2 = right_ones >= (n - i + 1) / 2;

        if (ok1 && ok2)
        {
            int dist = abs(n - 2 * i);
            if (dist < pos || (dist == pos && i < ans))
            {
                pos = dist;
                ans = i;
            }
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
