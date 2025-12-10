#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }

        vector<int> v;
        if (a[0][0] == a[1][0] || a[1][0] == a[2][0])
        {
            v.push_back(a[1][0]);
        }
        else
            v.push_back(a[0][0]);

        for (int i = 0; i < n; i++)
        {
            if (v.front() != a[i][0])
            {
                for (int j = 0; j < n; j++)
                {
                    v.push_back(a[i][j]);
                }
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
