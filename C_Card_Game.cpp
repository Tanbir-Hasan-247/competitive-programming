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
    
    bool ok;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            int a = i + 1;
            ok = false;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'B')
                {
                    int b = j + 1;
                    if ((b == 1 && a == n) ||
                        (b > a && !(b == n && a == 1)))
                    {
                        ok = true;
                        break;
                    }
                }
            }
            if (!ok)
            {
                break;
            }
        }
    }
    cout << (ok ? "Bob" : "Alice") << endl;
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
