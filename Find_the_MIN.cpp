#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    set<ll> v;
    while (t--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            ll x;
            cin >> x;
            v.insert(x);
        }
        else if (a == 2)
        {
            if (!v.empty())
            {
                ll y = *v.begin();
                cout << y << "\n";
                v.erase(y);
            }
            else
            {
                cout << "empty" << "\n";
            }
        }
    }
}