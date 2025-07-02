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
        sort(a.begin(), a.end());
        auto ok = [&](int time)
        {
            int currIdx = 0;
            int currWorkers = 1;
            for (int i = 0; i < n; i++)
            {
                if (a[i] - a[currIdx] > 2 * time)
                {
                    currIdx = i;
                    currWorkers++;
                }
            }
            return currWorkers <= 3;
        };
        int l = 0;
        int r = a[n - 1];
        while (true)
        {
            if (l == r)
            {
                cout << l << "\n";
                break;
            }
            if (r == l - 1)
            {
                if (ok(l))
                {
                    cout << l << "\n";
                    break;
                }
                else
                {
                    cout << r << "\n";
                    break;
                }
            }
            int m = (l + r) / 2;
            if (ok(m))
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
    }
}