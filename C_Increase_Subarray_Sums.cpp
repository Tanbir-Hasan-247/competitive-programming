#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> v;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        int mx = sum;
        int sum1 = sum;
        int k = 0;
        for (int j = i + 1; j < n; j++)
        {
            sum1 += a[j];
            sum1 -= a[k];
            k++;
            mx = max(mx, sum1);
        }
        v.push_back(mx);
    }

    // for(int b:v)
    // cout<<b<<" ";
    // cout<<endl;

    for (int i = 0; i <= n; i++)
    {
        int mx = 0;
        for (int j = 0; j < v.size(); j++)
        {
            int sum;
            if (i > j + 1)
            {
                sum = v[j] + x * (j + 1);
            }
            else
            {
                sum = v[j] + x * i;
            }
            mx = max(mx, sum);
        }
        cout << mx << " ";
    }
    cout << '\n';
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
