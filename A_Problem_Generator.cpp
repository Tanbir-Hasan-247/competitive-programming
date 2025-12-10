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

        string s;
        cin >> s;

        vector<int> a(7, 0);

        for (char c : s)
        {
            a[c - 'A']++;
        }

        int x = 0;

        for (int i = 0; i < 7; i++)
        {
            if (a[i] < m)
            {
                x += (m - a[i]);
            }
        }

        cout << x << "\n";
    }

    return 0;
}
