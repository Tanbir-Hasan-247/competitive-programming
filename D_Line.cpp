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
        string s;
        cin >> s;
        ll x = 0, total = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            int l = i;
            int r = n - i - 1;
            if (s[i] == 'L' && l < r)
            {
                x++;
                total += r;
                v.push_back(r - l);
            }
            else if (s[i] == 'R' && l > r)
            {
                x++;
                total += l;
                v.push_back(l - r);
            }
            else
            {
                if (s[i] == 'R')
                {
                    total += r;
                }
                else
                {
                    total += l;
                }
            }
        }
        vector<ll> ans(n);
        for (int i = x - 1; i < n; i++)
        {
            ans[i] = total;
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (int i = x - 2; i >= 0; i--)
        {
            total -= v.back();
            v.pop_back();
            ans[i] = total;
        }
        for (ll a : ans)
        {
            cout << a << " ";
        }
        cout << "\n";
    }
}