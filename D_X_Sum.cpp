#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[200][200];

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long sum = a[i][j];
                for (int k = 1; valid(i + k, j + k) || valid(i + k, j - k); k++)
                {
                    if (valid(i + k, j + k))
                        sum += a[i + k][j + k];
                    if (valid(i + k, j - k))
                        sum += a[i + k][j - k];
                }
                for (int k = 1; valid(i - k, j + k) || valid(i - k, j - k); k++)
                {
                    if (valid(i - k, j + k))
                        sum += a[i - k][j + k];
                    if (valid(i - k, j - k))
                        sum += a[i - k][j - k];
                }
                ans = max(ans, sum);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
