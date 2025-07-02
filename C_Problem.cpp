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
        int x = 0;
        if (n == m)
        {
            cout << "YES\n";
            // continue;
        }
        else if (m < n)
        {
            while (n != 0)
            {
                n -= 1;
                m += 1;
                if (m == n)
                {
                    x = 1;
                    break;
                }
            }
            x ? cout << "YES\n" : cout << "NO\n";
        }
        else if (n < m)
        {
            while (m != 0)
            {
                m -= 1;
                n += 3;
                if (m == n)
                {
                    x = 1;
                    break;
                }
            }
            x ? cout << "YES\n" : cout << "NO\n";
        }
    }
    return 0;
}