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
        int i, j, k;
        bool x = false;
        for (i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                x = true;
                j = i + 1;
                k = i + 2;
                break;
            }
        }
        cout << (x ? "YES\n" : "NO\n");
        if (x)
        {
            cout << i << " " << j << " " << k << "\n";
        }
    }
    return 0;
}
