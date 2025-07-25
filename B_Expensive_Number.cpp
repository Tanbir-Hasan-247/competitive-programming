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
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = s.size() - 1; i >= 0;)
    {
        if (s[i] != '0')
        {
            cnt++;
            i--;
            while (i >= 0)
            {
                if (s[i] == '0')
                    cnt++;
                i--;
            }
                }
        else
            i--;
    }

    cout << s.size() - cnt << endl;
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
