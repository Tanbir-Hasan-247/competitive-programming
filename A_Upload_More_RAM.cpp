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
        int n, k;
        cin >> n >> k;
        int ans = 0;
        while (n--)
        {
            ans++;
            if (n != 0)
                ans += (k - 1);
        }
        cout << ans << "\n";
    }
}