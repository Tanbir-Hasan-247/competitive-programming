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
    vector<int> a(n), b(n), c(n);
    for (int i = 1; i < n - 1; i++)
    {
        cin >> a[i];
    }
    int x=2;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == 1)
        {
            b[i - 1] = x;
            b[i] = x;
            b[i + 1] = x;
        }
        else
        {
            x++;
            b[i+1]=x-2;
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (b[i] == b[i - 1] && b[i] == b[i + 1])
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }

     for (int i = 1; i < n - 1; i++)
     {
         if (a[i] != c[i])
        {
            cout << "NO" << endl;
            return;
        }
     }
     cout << "YES" << endl;
    // for(int x:c)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
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
