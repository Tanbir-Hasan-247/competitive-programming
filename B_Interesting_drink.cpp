#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while (q--)
    {
        long long m;
        cin >> m;

        int l = 0, r = n - 1;
        int ans = 0;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (m >= a[mid])
            {
                ans = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
