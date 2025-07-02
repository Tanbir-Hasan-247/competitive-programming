#include <bits/stdc++.h>
using namespace std;

long long findMaxTeamSkill(int n, int m, vector<long long> &a, vector<long long> &b)
{
    if (n < 4 || m < 4 || n + m < 11)
    {
        return -1;
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    long long max_skill = 0;

    for (int i = 0; i < 4; i++)
    {
        max_skill += a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        max_skill += b[i];
    }

    vector<long long> remaining;
    for (int i = 4; i < n; i++)
    {
        remaining.push_back(a[i]);
    }
    for (int i = 4; i < m; i++)
    {
        remaining.push_back(b[i]);
    }

    sort(remaining.rbegin(), remaining.rend());
    for (int i = 0; i < min(3, (int)remaining.size()); i++)
    {
        max_skill += remaining[i];
    }

    return max_skill;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n);
        vector<long long> b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        cout << findMaxTeamSkill(n, m, a, b) << "\n";
    }

    return 0;
}
