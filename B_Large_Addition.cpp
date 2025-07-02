#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool ok = true;
        if (s[0] != '1' || s[s.size() - 1] == '9')
        {
            ok = false;
        }
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '0')
            {
                ok = false;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}