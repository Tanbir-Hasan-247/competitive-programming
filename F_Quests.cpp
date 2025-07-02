#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll N = 2e5 + 1;
int n;
ll c;
int d;
vector<ll> a(N);

bool check(int mid)
{
    int cyc = d / (mid + 1);
    int rest = d % (mid + 1);
    return a[min(mid + 1, n)] * cyc + a[min(rest, n)] >= c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> c >> d;

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        sort(a.begin() + 1, a.begin() + n + 1, greater<ll>());

        for (int i = 1; i <= n; i++)
            a[i] += a[i - 1];

        int l = 0, r = d;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            if (check(mid))
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (r < 0)
            cout << "Impossible" << '\n';
        else if (r >= d)
            cout << "Infinity" << '\n';
        else
            cout << r << '\n';
    }
    return 0;
}
