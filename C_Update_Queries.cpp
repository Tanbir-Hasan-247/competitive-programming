#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> a;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }

        string c;
        cin >> c;
        sort(c.begin(), c.end());

        int nxt = 0;
        for (auto val : a)
        {
            int id = val;
            id--;
            s[id] = c[nxt];
            nxt++;
        }

        cout << s << '\n';
    }

    return 0;
}
