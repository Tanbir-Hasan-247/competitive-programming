#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        if (n == 1)
            cout << "0" << endl;

        else
        {
            map<ll, ll> mp;
            ll mx = 0;
            for (auto u : v)
                mp[u]++;
            for (auto u : mp)
            {
                if (mx < u.second)
                {
                    mx = u.second;
                }
            }
            vector<ll> v1;

            if (mx == n)
                cout << "0\n";

            else
            {
                v1.push_back(mx);
                while (mx < n)
                {
                    mx *= 2;
                    v1.push_back(mx);
                }
                ll sum = 0;
                for (ll i = 1; i < v1.size(); i++)
                {
                    if (v1[i] < n)
                    {
                        sum += abs(v1[i] - v1[i - 1]);
                    }
                    else
                    {

                        sum += n - v1[i - 1];
                    }
                }
                cout << sum + v1.size() - 1 << "\n";
            }
        }
    }

    return 0;
}