#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int ans = 1, x = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                x++;
                ans = max(x, ans);
            }
            else
                x = 1;
        }
        cout << ans << " ";

        for (int i = 0; i < q; i++)
        {
            char ch;
            cin >> ch;
            s += ch;
            if (s[n + i] == s[n + i - 1])
            {
                x++;
                ans = max(x, ans);
            }
            else
                x = 1;
            cout << ans << " ";
        }

        cout << "\n";
    }
}
