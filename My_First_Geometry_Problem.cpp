#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int x1 = 0, x2 = 0;
        int y1 = 0, y2 = 0;

        if (s[0] == '1')
            x1 = -10;
        if (s[1] == '1')
            x2 = 10;

        if (s[2] == '1')
            y2 = 10;
        if (s[3] == '1')
            y1 = -10;

        int x = x2 - x1 + 1;
        int y = y2 - y1 + 1;

        cout << x * y << '\n';
    }
    return 0;
}
