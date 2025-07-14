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

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    if ((a + b) > (n - 2) || abs(a - b) > 1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ans(n);

    if (a == 0 && b == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    if (a > b)
    {
        b++;
        int j = 0;
        int x = 1;
        for (int i = 0; i < n;)
        {
            if (b)
            {
                ans[i] = x;
                i += 2;
                j = i;
                x++;
                b--;
                if (b == 0)
                {
                    x = (n - x);
                    x++;
                }
            }
            else
            {
                ans[i] = x;
                x--;
                i++;
            }
        }

        x = n;
        for (int i = 1; i < j; i += 2)
        {
            ans[i] = x;
            x--;
        }
    }
    else if (a < b)
    {
        a++;
        int j = 0, x = n;

        for (int i = 0; i < n;)
        {
            if (a)
            {
                ans[i] = x;
                i += 2;
                j = i;
                x--;
                a--;
                if (a == 0)
                {
                    x = (n - x);
                    x++;
                }
            }
            else
            {
                ans[i] = x;
                x++;
                i++;
            }
        }

        x = 1;
        for (int i = 1; i < j; i += 2)
        {
            ans[i] = x;
            x++;
        }
    }
    else
    {
        a++;
        int j = 0, x = n;

        for (int i = 0; i < n;)
        {
            if (a)
            {
                ans[i] = x;
                i += 2;
                j = i;
                x--;
                a--;
                if (a == 0)
                {
                    // x=(n-x);
                    // x++;
                    i--;
                    j--;
                }
            }
            else
            {

                ans[i] = x;
                x--;
                i++;
            }
        }

        x = 1;
        for (int i = 1; i < j; i += 2)
        {
            ans[i] = x;
            x++;
        }
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
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