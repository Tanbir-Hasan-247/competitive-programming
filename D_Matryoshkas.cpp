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
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
        vector<pair<ll, ll>> v;
        for (auto pr : m)
        {
            v.push_back(pr);
        }
        v.push_back(make_pair(8,0));
        ll x = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i].first == v[i + 1].first-1)
            {
                if (v[i].second > v[i + 1].second)
                {
                    x += v[i].second - v[i + 1].second;
                }
            }
            else
            x += v[i].second;
        }
        cout << x << "\n";
    }
}