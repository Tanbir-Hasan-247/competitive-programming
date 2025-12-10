#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int a = 10 * (y - x);
        int b = 100 - y;

        int ans = (a + b - 1) / b;

        cout << ans << "\n";
    }

    return 0;
}
