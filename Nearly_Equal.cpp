#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int mn = m;

        for (int i = 0; i <= n - m; i++)
        {
            string substr = a.substr(i, m);
            int dis = 0;
            for (int i = 0; i < m; i++)
            {
                if (substr[i] != b[i])
                {
                    dis++;
                }
            }
            mn = min(mn, dis);
        }

        cout << mn << "\n";
    }

    return 0;
}
