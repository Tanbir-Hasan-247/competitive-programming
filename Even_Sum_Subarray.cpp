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

        int max_len = 0;
        int prefix_sum = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;

        for (int i = 0; i < n; i++)
        {
            prefix_sum += a[i];

            if (prefix_sum % 2 == 0)
            {
                max_len = max(max_len, i + 1);
            }

            if (mp.find(prefix_sum % 2) == mp.end())
            {
                mp[prefix_sum % 2] = i;
            }
            else
            {
                max_len = max(max_len, i - mp[prefix_sum % 2]);
            }
        }

        cout << max_len << '\n';
    }
    return 0;
}
