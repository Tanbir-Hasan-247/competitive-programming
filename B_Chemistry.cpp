#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> m;
        for (char c : s)
        {
            m[c]++;
        }

        int x = 0;
        for (auto it : m)
        {
            if (it.second % 2 != 0)
            {
                x++;
            }
        }

        if (x > k + 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
