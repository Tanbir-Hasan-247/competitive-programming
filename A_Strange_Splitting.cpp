#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool ok = false;
        string s(n, ' ');

        for (int i = 1; i < n; i++)
        {
            int rMn = a[0], rMx = a[i - 1];
            int bMn = a[i], bMx = a[n - 1];

            int red_range = rMx - rMn;
            int blue_range = bMx - bMn;

            if (red_range != blue_range)
            {
                ok = true;
                for (int j = 0; j < i; j++)
                {
                    s[j] = 'R';
                }
                for (int j = i; j < n; j++)
                {
                    s[j] = 'B';
                }
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << "\n";
            cout << s << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
