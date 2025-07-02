#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> tickets(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tickets[i];
    }

    vector<int> customer(m);
    for (int i = 0; i < m; i++)
    {
        cin >> customer[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[tickets[i]] += 1;
    }

    for (int i = 0; i < m; i++)
    {
        auto it = mp.upper_bound(customer[i]);
        if (it == mp.begin())
        {
            cout << -1 << "\n";
        }
        else
        {
            it--;
            cout << it->first << "\n";
            it->second -= 1;
            if (it->second == 0)
                mp.erase(it);
        }
    }

    return 0;
}
