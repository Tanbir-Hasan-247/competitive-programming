#include <bits/stdc++.h>
using namespace std;
#define ll long long
int binary_search(vector<ll>& v, int low, int high, ll a)
{
    int l = low, h = high;
    int ans = -1;
    while (l <= h)
    {
        int m = (l + (h )) / 2;
        if (v[m-1] >= a)
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        vector<ll> v(n); 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(),greater<int>()); 
        v[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            v[i] = v[i - 1] + a[i];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            cout << binary_search(v, 1, n , x) << "\n";
        }
    }
    return 0;
}
