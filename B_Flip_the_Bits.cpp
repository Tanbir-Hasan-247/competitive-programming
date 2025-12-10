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

    string s, ss;
    cin >> s >> ss;

    if (s == ss)
    {
        cout << "YES" << endl;
        return;
    }

    vector<pair<int, int>> a(n); 
    int zero = 0, one = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;

        a[i] = {one, zero};
    }

    bool ok = false; 

    for (int i = n - 1; i >= 0; i--)
    {
        char curr = s[i];
        if (ok)
            curr = (curr == '0' ? '1' : '0'); 

        if (curr != ss[i])
        {
            if (a[i].first != a[i].second)
            {
                cout << "NO" << endl;
                return;
            }
            ok = !ok;
        }
    }

    cout << "YES" << endl;
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
