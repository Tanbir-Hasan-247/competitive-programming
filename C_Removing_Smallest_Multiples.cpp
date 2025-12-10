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

        vector<int> visited(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                visited[i + 1] = 2;
            }
        }

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (visited[j] == 0)
                {
                    visited[j] = 1;
                    ans += i;
                }
                else if (visited[j] == 2)
                {
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
