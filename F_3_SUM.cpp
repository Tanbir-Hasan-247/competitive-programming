#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

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
            mp[x % 10]++;
        }

        vector<int> v;
        for (auto [val, cnt] : mp)
        {
            for (int i = 0; i < min(3, cnt); i++)
            {
                v.push_back(val);
            }
        }

        bool ok = false;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                for (int k = j + 1; k < v.size(); k++)
                {
                    if ((v[i] + v[j] + v[k]) % 10 == 3)
                        ok = true;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}