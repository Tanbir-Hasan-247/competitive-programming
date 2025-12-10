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
    string s;
    cin >> s;

    map<char, int> mp;

    for (auto ch : s)
    {
        mp[ch]++;
    }
    for (auto [a, b] : mp)
    {
        if (b == 2)
        {
            if (s[0] == a && s[0] == s[n - 1])
            {
                continue;
            }
            else
            {
                cout << "Yes" << endl;
                return;
            }
        }
        else if (b > 2)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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
