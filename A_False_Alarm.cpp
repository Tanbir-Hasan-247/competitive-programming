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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    bool ans = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 || i == 0)
        {
            int cnt = 0;
            bool ok1 = true, ok2 = false;
            int j = 0;
            while (j < n)
            {
                if (a[j] == 0)
                {
                    j++;
                    cnt++;
                }
                else
                {
                    if (!ok2)
                    {
                        ok2 = true;
                        int cnt1 = x;
                        while (j < n && cnt1 > 0)
                        {
                            j++;
                            cnt1--;
                        }
                        cnt += x - cnt1;
                    }
                    else
                    {
                        ok1 = false;
                        break;
                    }
                }
            }
            if (ok1)
            {
                ans = true;
                break;
            }
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
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
