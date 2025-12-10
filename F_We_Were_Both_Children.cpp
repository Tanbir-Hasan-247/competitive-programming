#include<bits/stdc++.h>
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

        map<int, ll> mp, mpp;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= n)
                mpp[x]++;
        }
        for (int i = 1; i <= n; i++)
        {
            int j = i;
            while (j <= n)
            {
                mp[j] += mpp[i];
                j += i;
            }
        }
        ll mx = 0;
        for (auto it : mp)
        {
            mx = max(mx, it.second);
        }
        cout << mx << "\n";
    }
}