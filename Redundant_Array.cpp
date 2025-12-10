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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        unordered_map<int, int> mp;

        for (int i = 0; i < n; ++i)
        {
            mp[a[i]]++;
        }
        int maxFreq = 0;
        int target = 0;
        for (auto &[key, value] : mp)
        {
            if (value > maxFreq)
            {
                maxFreq = value;
                target = key;
            }
        }

        int minCost = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != target)
            {
                minCost += target;
            }
        }

        cout << minCost << "\n";
    }

    return 0;
}
