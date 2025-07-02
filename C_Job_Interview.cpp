#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 5e5 + 5;
#define pii pair<int, int>;

int n, m;
ll a[N][2];
ll p[N][2];
ll sum[N][2];
ll strong[N];

void build()
{
    for (int i = 1; i <= n + m + 1; i++)
    {
        strong[i] = strong[i - 1] + max(a[i][0], a[i][1]);
        sum[i][0] = sum[i - 1][0] + a[i][0];
        sum[i][1] = sum[i - 1][1] + a[i][1];
        p[i][0] = p[i - 1][0] + (a[i][0] > a[i][1] ? 1 : 0);
        p[i][1] = p[i - 1][1] + (a[i][1] > a[i][0] ? 1 : 0);
    }
}

ll getSumStrong(int l, int r)
{
    if (l > r)
        return 0;
    return strong[r] - strong[l - 1];
}

int bsearch_n(int bad)
{
    int low = 0, high = n + m + 1;
    int ans = n + m + 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int koto = p[mid][0];
        if (mid >= bad)
        {
            koto -= (a[bad][0] > a[bad][1]);
        }
        if (koto > n)
        {
            high = mid - 1;
        }
        else if (koto == n)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int bsearch_m(int bad)
{
    int low = 0, high = n + m + 1;
    int ans = n + m + 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int koto = p[mid][1];
        if (mid >= bad)
        {
            koto -= (a[bad][1] > a[bad][0]);
        }
        if (koto > m)
        {
            high = mid - 1;
        }
        else if (koto == m)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n + m + 1; i++)
        {
            cin >> a[i][0];
        }
        for (int i = 1; i <= n + m + 1; i++)
        {
            cin >> a[i][1];
        }
        build();
        for (int i = 1; i <= n + m + 1; i++)
        {
            int idx_n = bsearch_n(i);
            int idx_m = bsearch_m(i);

            ll ans = 0;
            if (idx_n <= idx_m)
            {
                ans += getSumStrong(1, idx_n);

                ans += sum[n + m + 1][1] - sum[idx_n][1];

                if (i <= idx_n)
                {
                    ans -= max(a[i][0], a[i][1]);
                }
                else
                {
                    ans -= a[i][1];
                }
            }
            else
            {
                ans += getSumStrong(1, idx_m);

                ans += sum[n + m + 1][0] - sum[idx_m][0];

                if (i <= idx_m)
                {
                    ans -= max(a[i][0], a[i][1]);
                }
                else
                {
                    ans -= a[i][0];
                }
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}