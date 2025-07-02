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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 && b[i] <= 0)
                x++;
            else if (a[i] <= 0 && b[i] == 1)
                y++;
        }
        int req = 0, ye = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1 && b[i] == -1)
                req++;
            else if (a[i] == 1 && b[i] == 1)
                ye++;
        }
        for (int i = 0; i < req; i++)
        {
            if (x < y)
            {
                y--;
            }
            else
                x--;
        }
        for (int i = 0; i < ye; i++)
        {
            if (x < y)
                x++;
            else
                y++;
        }
        cout << min(x, y) << "\n";
    }
}