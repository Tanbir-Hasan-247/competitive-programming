#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        priority_queue<ll> pq;
        for (ll e : a)
        {
            if (e > 0)
            {
                pq.push(e);
            }
            else if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
