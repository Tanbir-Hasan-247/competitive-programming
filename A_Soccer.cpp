#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ll d1 = x1 - y1;
        ll d2 = x2 - y2;

        cout << ((d1 * d2 >= 0) ? "YES" : "NO") << "\n";
    }
    return 0;
}
