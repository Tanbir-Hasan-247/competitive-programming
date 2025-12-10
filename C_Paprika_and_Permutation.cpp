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
        int ar[n];
        map<ll, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        vector<ll> v;
        for (auto it : mp)
        {
            ll x = it.first;
            int y = it.second;
            if (y > 1 && x <= n)
            {
                for (int i = 1; i < y; i++)
                    v.push_back(x);
            }
            else if (x > n)
            {
                for (int i = 1; i <= y; i++)
                    v.push_back(x);
            }
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll ans = v.size();
        for (int i = 0; i < n; i++)
        {
            if (mp[i + 1] == 0)
            {
                ll x = v.back();
                v.pop_back();
                ll y = i + 1;
                if (x % (x - y) == y)
                {
                    continue;
                }
                else
                {
                    ans = -1;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
}