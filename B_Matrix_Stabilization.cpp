#include <bits/stdc++.h>
using namespace std;

int n, m;

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                set<int> s;

                if (valid(i - 1, j))
                {
                    s.insert(a[i - 1][j]);
                }
                if (valid(i + 1, j))
                {
                    s.insert(a[i + 1][j]);
                }
                if (valid(i, j - 1))
                {
                    s.insert(a[i][j - 1]);
                }
                if (valid(i, j + 1))
                {
                    s.insert(a[i][j + 1]);
                }

                int mx = INT_MIN;
                if (!s.empty())
                {
                    mx = *s.rbegin();
                }

                if (a[i][j] > mx)
                {
                    a[i][j] = mx;
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
