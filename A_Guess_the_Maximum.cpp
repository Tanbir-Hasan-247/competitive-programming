#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> v;
        for (int i = 1; i < n; i++)
        {
            ll mx = max(a[i], a[i - 1]);
            v.push_back(mx);
        }

        sort(v.begin(), v.end());
        cout << v.front() - 1 << "\n";
    }
    return 0;
}