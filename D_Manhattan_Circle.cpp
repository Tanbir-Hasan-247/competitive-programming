#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int mnR = n, mxR = 0, mnC = m, mxC = 0;
        bool ok = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == '#')
                {
                    mnR = min(mnR, i);
                    mxR = max(mxR, i);
                    mnC = min(mnC, j);
                    mxC = max(mxC, j);
                    ok = true;
                }
            }
        }

        if (ok)
        {
            int r = (mnR + mxR) / 2 + 1;
            int c = (mnC + mxC) / 2 + 1;
            cout << r << " " << c << "\n";
        }
    }

    return 0;
}
