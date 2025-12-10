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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool same = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[0])
            {
                same = false;
                break;
            }
        }

        if (same)
        {
            cout << 0 << endl;
        }
        else
        {
            int x = a[0];
            int y = a[n - 1];
            int c1 = 0, c2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (x == a[i])
                {
                    c1++;
                }
                else
                {
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (y == a[i])
                {
                    c2++;
                }
                else
                {
                    break;
                }
            }
            if (x == y)
            {
                cout << n - (c1 + c2) << endl;
            }
            else
            {
                cout << n - max(c1, c2) << endl;
            }
        }
    }
}