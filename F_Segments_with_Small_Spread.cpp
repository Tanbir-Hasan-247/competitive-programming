#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long l = 0, r = 0, ans = 0;
    multiset<long long> ml;
    while (r < n)
    {
        ml.insert(a[r]);
        long long mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l < r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= s)
                {
                    break;
                }
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << "\n";
}