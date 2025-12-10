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
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = i + 1;
        }
        sort(a.begin(), a.end());
        if (a[0] != 1)
        {
            cout << "NO\n";
            continue;
        }
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            b[i] = b[i] - a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (b[i] < 0)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}