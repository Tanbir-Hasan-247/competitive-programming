#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, k;
        cin >> s >> k;
        int ans = INT_MAX;
        for (int i = 0; i <= n - m; i++)
        {
            int val = 0;
            for (int j = 0; j < m; j++)
            {
                val += min(abs(s[i + j] - k[j]), abs(10 - abs(s[i + j] - k[j])));
            }
            ans = min(ans, val);
        }
        cout << ans << "\n";
    }
    return 0;
}