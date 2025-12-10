#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> a(m), b(n);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    long long ans = 0;
    while (l < m && r < n)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];
        while (a[l] == curr && l < m)
        {
            cnt1++;
            l++;
        }
        while (b[r] < curr && r < n)
        {
            r++;
        }
        while (b[r] == curr && r < n)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << "\n";
}