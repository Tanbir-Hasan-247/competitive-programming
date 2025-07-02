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
        map<ll, int> mp;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<pair<int, ll>> q;
        for (auto [val, cnt] : mp)
        {
            q.push({cnt, val});
        }

        int ans = n;
        while (q.size() >= 2)
        {
            auto [cnt1, val1] = q.top();
            q.pop();
            auto [cnt2, val2] = q.top();
            q.pop();
            cnt1--;
            cnt2--;
            ans -= 2;
            if (cnt1 > 0)
            {
                q.push({cnt1, val1});
            }
            if (cnt2 > 0)
            {
                q.push({cnt2, val2});
            }
        }

        cout << ans << "\n";
    }
}