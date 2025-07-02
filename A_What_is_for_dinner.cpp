#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> rows(m + 1);
    for (int i = 0; i < n; i++)
    {
        int r, c;
        cin >> r >> c;
        rows[r].push_back(c);
    }

    int max_crucians = 0;
    for (int i = 1; i <= m; i++)
    {
        if (!rows[i].empty())
        {
            int min_viability = *min_element(rows[i].begin(), rows[i].end());
            max_crucians += min_viability;
        }
    }

    cout << min(max_crucians, k) << "\n";

    return 0;
}
