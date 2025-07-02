#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        set<ll> s;
        for (ll i = 1; i * i * i < x; i++)
        {
            s.insert(i * i * i);
        }
        bool ok = false;
        for (ll i = 1; i * i * i < x; i++)
        {
            if (s.count(x - i * i * i))
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
