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
        vector<ll> a;
        a.push_back(x);
        ll i = 0;
        while ((1 << i) < x)
        {
            if (x & (1 << i))
            {
                x = x ^ (1 << i);
                a.push_back(x);
            }
            i++;
        }
        while (x > 1)
        {
            a.push_back(x / 2);
            x /= 2;
        }
        cout << a.size() << "\n";
        for (ll val : a)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
}