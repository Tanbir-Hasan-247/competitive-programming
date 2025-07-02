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
        int n;
        cin >> n;

        vector<int> a(n);
        int mnidx = 0;
        cin >> a[0];
        int mnval = a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (mnval > a[i])
            {
                mnidx = i;
                mnval = a[i];
            }
        }

        bool ok = true;
        for (int i = mnidx + 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? mnidx : -1) << "\n";
    }
}