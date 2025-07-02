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
    int j = 0;
    set<char> st1, st2;
    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] == 1)
        {
            j = i;
            break;
        }
        else
            j++;
        mp[s[i]]++;
        st1.insert(s[i]);
    }

    for (int i = j; i < n; i++)
    {
        st2.insert(s[i]);
    }

    // int ans = 0, f = 0;
    // for (auto [key, val] : mp)
    // {
    //     if (val > 1)
    //     {
    //         ans++;
    //         f = 1;
    //     }
    //     else
    //         ans ++;
    // }

    cout << st1.size() + st2.size() << endl;
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
