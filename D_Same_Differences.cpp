#include <bits/stdc++.h>
using namespace std;
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
        map<int, int> mp;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x -= i;
            ans += mp[x];
            mp[x]++;
        }
        cout << ans << "\n";
    }
    return 0;
}