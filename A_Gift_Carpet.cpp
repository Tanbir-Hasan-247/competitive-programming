#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> c(n, vector<char>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> c[i][j];
            }
        }

        bool found_v = false, found_i = false, found_k = false, found_a = false;

        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (c[i][j] == 'v' && !found_v)
                {
                    found_v = true;
                    break;
                }
                if (c[i][j] == 'i' && found_v && !found_i)
                {
                    found_i = true;
                    break;
                }
                if (c[i][j] == 'k' && found_v && found_i && !found_k)
                {
                    found_k = true;
                    break;
                }
                if (c[i][j] == 'a' && found_v && found_i && found_k && !found_a)
                {
                    found_a = true;
                    break;
                }
            }
        }

        cout << ((found_v && found_i && found_k && found_a) ? "YES" : "NO") << "\n";
    }
    return 0;
}
