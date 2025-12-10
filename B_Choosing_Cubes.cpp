#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int fav = a[f - 1];

        sort(a.rbegin(), a.rend());

        int minPos = -1, maxPos = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == fav)
            {
                if (minPos == -1)
                {
                    minPos = i + 1;
                }
                maxPos = i + 1;
            }
        }

        if (minPos <= k && maxPos <= k)
        {
            cout << "YES" << "\n";
        }
        else if (minPos > k && maxPos > k)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "MAYBE" << "\n";
        }
    }

    return 0;
}
